//write a function to switch to test function if pressed 3 & 5, otherwise print getOption

#include <stdio.h>
//if, if else and else in macro
#define getOption(x) ((x == 3) ? test() : \
                     (x == 5) ? test(): \
                     printf("no = %d\n", x))
        

void test(){
    printf("inside test\n");
}

int main()
{
    volatile char var;
    while(1){
        printf("provide no 1-10\n");
        var = getchar(); //getchar() returns char so need to convert
        int val = var - '0'; // sub with '0'
        if(val < 10 && val > 0){ //>0 cause \n returns negative values
            getOption(val);
        }
    }
    return 0;
}
