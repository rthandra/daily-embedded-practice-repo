#include <stdio.h>
#include <stdint.h>

// To execute C, please define "int main()"

int main() {
  int a = 4;

  for(int i = 3; i >= 0; i--){
    int res = (a >> i) & 1; 
    printf("%d", res);
  }
 
  return 0;
}
