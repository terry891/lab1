package sha3

import chiseltest._

class ChiModuleTests extends TestWithBackendSelect with ChiselScalatestTester {
  behavior of "ChiModule"
  
  it should "do the Chi function in Sha3" in {
    test(new ChiModule()).withAnnotations(
      simAnnos
    ) { c =>

      //Rotate Left 64bit from Theta test
      def ROTL64(x: BigInt, y: Int) = (((x) << (y)) | ((x) >> (64 - (y)))) & (((1: BigInt) << 64) - 1)

      //Try 100 times with random inputs
      for (iter <- 0 to 100) {
        //Get 25 random inputs in 5x5 matrix
        val state = Array.fill(5 * 5) {
          BigInt(util.Random.nextInt(Integer.MAX_VALUE))
        }

        //Translate C code for ground truth
        var st = state.clone
        var bc = Array.fill(5) { BigInt(0) }
        for (i <- 0 to 4)
          bc(i) = st(i) ^ st(i + 5) ^ st(i + 10) ^ st(i + 15) ^ st(i + 20)
        for (i <- 0 to 4) {
          val tmp = bc((i + 4) % 5) ^ ROTL64(bc((i + 1) % 5), 1)
          for (j <- 0 to 24 by 5)
            st(j + i) ^= tmp
        }




        //Set up variables
        val keccakf_piln = Vector(10, 7,  11, 17, 18, 3, 5,  16, 8,  21, 24, 4, 15, 23, 19, 13, 12, 2, 20, 14, 22, 9,  6,  1) 
        val keccakf_rotc = Vector(1,  3,  6,  10, 15, 21, 28, 36, 45, 55, 2,  14, 27, 41, 56, 8,  25, 43, 62, 18, 39, 61, 20, 44) 
        var state_temp = st.clone
        var tem = state_temp(1)

        //Do the keccakf function
        for (i <- 0 to 23) {
            val temp1 = keccakf_piln(i);
            val temp2 = state_temp(temp1);
            state_temp(temp1) = ROTL64(tem, keccakf_rotc(i));
            tem = temp2;
        }

        //Do Chi functions
        var state_temp2 = state_temp.clone
        for (j <- 0 to 24 by 5) {
          for (i <- 0 to 4)
            bc(i) = state_temp2(j+i)
            for (i <- 0 to 4)
              state_temp2(j+i) ^= (~bc((i + 1) % 5)) & bc((i + 2) % 5)
        }

        //PeekPoke testing
        for (i <- 0 until 25)
          c.io.state_i(i).poke(state_temp(i))
        c.clock.step(1)
        for (j <- 0 until 25)
          c.io.state_o(j).expect(state_temp2(j))
      }
    }
  }

}
