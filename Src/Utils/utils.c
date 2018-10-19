#include <sched.h>
#include <stdio.h>

char * int2char(uint8_t num){
  static char retnum[21];       // Enough for 20 digits plus NUL from a 64-bit uint.
  sprintf( retnum, "%u \n\r", num );
  return retnum;
}