
#include <stdio.h>
#include <string.h>
/*
 1. look at the word transition by looking at its first char and its prev needs to be a space for a word to transition.
 2. first word without space is an exception 
*/
int main() {
  char s[] = "    Hello my name is Rushika f  ";  
  int len = strlen(s);
  int i = 0;
  int count = 0;

  while(i < len){
    if(s[i] != ' ' && ((i == 0 )|| (s[i - 1] == ' ' ))){
      count++;
    }
    i++;
  }
  printf("count = %d", count);
  return 0;
}
