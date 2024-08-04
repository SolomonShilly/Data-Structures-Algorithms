#include <stdio.h>

void conditional(void){
  int odd = 5;
  if(odd % 2 != 0){
    int remainder = odd % 2;
  printf("Remainder of %i / 2 is %i\n\n", odd, remainder);
  }
}