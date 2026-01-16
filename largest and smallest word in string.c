Write a program in C to find the largest and smallest words in a string.

Test Data :
Input the string : It is a string with smallest and largest word.

Expected Output :

The largest word is 'smallest'
and the smallest word is 'a' 
in the string : 'It is a string with smallest and largest word.'.

intuition - for every new word, you track its index, its length and compare to max or min values,
- for min you need to intially set first word as min and then keep compare that with the rest of the words

- if you come across a space,just move forward and increment index, otherwise your index will not move forward, make sure to have continue incase there is multiple spaces, it keeps checking the if statement.

- track current word start index before every new word happens so it doesnt increment with i 


have a min and max string
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void findMaxWord(char *s){
  int i = 0;
  int maxWordCount = 0;
  int minWordCount = 0;
  int currWordCount = 0;
  int currStart = 0;
  int maxStart = 0;
  int minStart = 0;
  int firstword = 1;
  //char *output = malloc(strlen(s) + 1);

  while(s[i] != '\0' ){

    if(s[i] == ' '){
      i++;
      continue;
    }

    currStart = i; //now no space, start of word
    while (s[i] != ' ' && s[i] != '\0') {
        currWordCount++;
        i++;
    }
    if(firstword){
        minWordCount = currWordCount;
        minStart = currStart;
        firstword = 0;
    }
    if(currWordCount > maxWordCount){
        maxWordCount = currWordCount;
        maxStart = currStart;
    }
    else if(currWordCount < minWordCount) {
      minWordCount = currWordCount;
      minStart = currStart;
    }
    currWordCount = 0;
        
  }
  
  //max start in the now the start index of the largest word
  for(int j = maxStart; j < maxStart + maxWordCount; j++){
    printf("%c", s[j]);
  }
  for(int k = minStart; k < minStart + minWordCount; k++){
    printf("%c", s[k]);
  }
}

int main() {
  char s[] = "Iaaa is string with smallest and largest word.";
  findMaxWord(s);
  return 0;
}
