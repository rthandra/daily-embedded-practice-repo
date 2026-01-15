/*
Write a program in C to remove characters from a string except alphabets.

Test Data :
Input the string : w3resource.com

Expected Output :

After removing the Output String : wresourcecom 

 - have two pointers, only only changes if its alphanumeric
*/
// To execute C, please define "int main()"

void removea(char *s){
  int k = 0;
  int i = 0;
  while(s[i] != '\0'){
    if(isalpha(s[i])){
      s[k++] = s[i++];
    }
    else{
      i++;
    }
    
  }
  s[k] = '\0';

  for(int i = 0; i < k; i++){
    printf("%c\n", s[i]);
  }

}


int main() {
  char s[] = "w3resource.com";
  removea(s);

  return 0;
}
