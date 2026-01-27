#include <stdio.h>
#include <string.h>
/*
remove any extra space in the string
str = "   Hello Geeks . Welcome   to  GeeksforGeeks   .    ";
Output: 
"Hello Geeks. Welcome to GeeksforGeeks."
H  Hello
He Hello
HelHello
Hellollo
Hello Geeks ks 

intialize left and right pointers
main loop: loop until end:
  loop until right is not space:
    check if right is > 0 and if its previous char is space: - indicating that right is at a new word
        add space to left
    copy right's value into left
  now add left's next - space, indicating end of word
add '\0' to left next to terminate any trailing space
*/

void removeSpace(char *s){
  int left = 0;
  int right = 0;

  while(s[right] != '\0'){

    while(s[right] != ' '){
      if(right != 0 && s[right-1] == ' '){ 
        s[left++] = ' ';
      }
      s[left++] = s[right++];
    }
    right++;
  }

  s[left] = '\0';
  for(int i = 0; s[i] != '\0'; i++){
    printf("%c", s[i]);
  }
}


int main() {
  char s[] = "   Hello Geeks  Welcome   to  GeeksforGeeks               ";
  removeSpace(s);
  return 0;
}
