#include <stdio.h>
#include <string.h>


int countVowels(char str[]){
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i]=='o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
    
}

int main()
{
    char str[100];
    scanf("%s", str);
    
    int totalCount = countVowels(str);
    printf("count = %d", totalCount);

    return 0;
}
