#include <stdio.h>

/*
 A 0100 0001 -> a 0110 0001
 B 0100 0010 -> b 0110 0010
 C 0100 0011 ->
 
 pattern to notice - the 5th bit is always set

*/


int main()
{
    int upper = 0b01100001;
    int mask = 0x20; 
    
    
    int lower = (upper | mask);
    printf("lower = %X", lower);

    return 0;
}
