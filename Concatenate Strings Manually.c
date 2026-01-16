int main(){

  char s[] = "This is a test string";
  char t[] = "Hi";
  int lenS = strlen(s);
  int lenT = strlen(t);
  int lenA = lenS + lenT + 1;

  char *arr = malloc(lenA);

  int k = 0;
  for(int i = 0; s[i] != '\0'; i++){
    arr[k++] = s[i];
  }
  for(int j = 0; t[j] != '\0'; j++){
    arr[k++] = t[j];
  }

  arr[k] = '\0'; //otherwise ??

  for(int z = 0; z < lenA; z++){
      printf("%c\n", arr[z]);
  }
  
  free(arr);

  return 0;

}
