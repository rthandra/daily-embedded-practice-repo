/*
 every pass - you comopare every element to its prev
 you do n-1 pass, so every element in string is sorted once
*/

void bubbleSort(char *s){
  int len = strlen(s);

  for(int j = 0; j<len;j++){
    for(int i = 1; i < len; i++){
      if(s[i] < s[i-1]){
        char temp = s[i-1];
        s[i-1] = s[i];
        s[i] = temp;
      }
    }
  }

  for(int i = 0; i < len; i++){
    printf("%c\n", s[i]);
  }
}

int main() {

  char s[] = "dbca";
  bubbleSort(s);
  return 0;
}
/*
//optimize
void bubbleSort(char *s){
  int len = strlen(s);
  int count = 0;

  for(int j = 0; j<len;j++){
    for(int i = 1; i < len; i++){
      if(s[i] < s[i-1]){
        char temp = s[i-1];
        s[i-1] = s[i];
        s[i] = temp;
      }
      else{
        count++;
      }
      if(count == len-1){
        printf("count = %d\n", count);
        break;
      }

    }
    count = 0;//reset count after every call
  }

  
  for(int i = 0; i < len; i++){
    printf("%c\n", s[i]);
  }
}

int main() {

  char s[] = "dbca";
  bubbleSort(s);
  return 0;
}











*/
