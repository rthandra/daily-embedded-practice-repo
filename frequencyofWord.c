/*
Test Data :
Input the string : The string where the word the present more than once.

Expected Output :

The frequency of the word 'the' is : 3 
*/

void count(char *s, char *sub){
  int n = strlen(s);
  int len = strlen(sub);
  int count = 0;

  for(int i = 0; i < n; i++){
    s[i] = tolower(s[i]);
    if(strncmp(sub, s + i, len) == 0){
      count++;
    }
  }
  printf("%d", count);
}
int main() {

  char s[] = "The string where the word the present more than once.";
  char sub[] = "the";
  count(s, sub);
  return 0;
}
