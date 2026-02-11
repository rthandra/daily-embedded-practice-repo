#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
Subtract the number without using '-' 
ex:

1-1 = 0
0-0 = 0
1-0 = 1
0-1 = 1, with 1 carry

0110
0001
0101

0111
0010

0101
1010
0001
0000

0111 - xor - sub without carry
borrow can be found if ~(a) & b is 1 because borrow happens only when 0 1 
borrow should be left shifted and added to next bit

  loop until a is empty
  xor a and b
  ~(a) & b to find borrow << 1 

*/

int main(){

  int a = 1; 
  int b = 4;
  int result = 0;

  while(b){
    result = a ^ b;
    int borrow = ((~a) & b) << 1;
    a = result;
    b = borrow;
  }

  printf("%d", result);

  return 0;
}
