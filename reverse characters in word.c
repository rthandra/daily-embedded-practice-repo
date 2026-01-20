#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void reverseWords(char *s){
  int l = 0;
  int r = 0;
  int forward = 0;
  int len = strlen(s);
  while(s[forward] != '\0'){
    if(s[forward] != ' ' && (forward == 0 || s[forward-1] == ' ')){
      l = forward;
    }
    if(s[forward] != ' ' && (s[forward + 1] == ' ' ||  s[forward + 1] == '\0' )){ //end of word + 1
      r = forward; //end of word
      while(l < r){
        int temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
      }
    }
    forward++;
  }
}
int main() {
  char s[] = "Rish is  a good girl";
  reverseWords(s);
  return 0;
}
