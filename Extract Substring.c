
 - find the pos
  - check count with start number
 - print until you see space
   - iterate pointer until you see space and add it to your output string
                              or
  length of string given, start index given :
  - create an output string of size len given string
  - have a pointer, move to pos and starting adding until out put len is fitted
  
*/

void extractSub(char *s, int len, int start){
  char output[len];

  for(int i = 0; i < len; i++){
    output[i] = s[start-1];
    start++;
  }
  for(int i = 0; i <len; i++){
    printf("%c\n", output[i]);
  }

}
int main() {

  char s[] = "this is test string";
  int len = 4;
  int start = 9;
  extractSub(s, len, start);
  return 0;
}
