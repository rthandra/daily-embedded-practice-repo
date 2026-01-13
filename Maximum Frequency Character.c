#include <stdio.h>
#include <string.h>

void maxchar(char *s){
  int arr[26];
  int max = 0;

  for(int i = 0; i < strlen(s); i++){
    arr[s[i]-'a']++;
  }

  for(int i = 0; i < 26; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("%d", max);
  /*
  int max = 0;
  int currenMax = 0;
  for(int i = 0; i < strlen(s); i++){
    for(int j = 0; j< strlen(s); j++){
      if(s[i] == s[j]){
        currenMax++;
      }
    }
    if(currenMax > max){
      max = currenMax;
     
    }
    currenMax = 0;
  }*/
}

int main(){
  char s[] = "hello";
  maxchar(s);
  return 0;
}
