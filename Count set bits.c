//18. Count set bits
/*for number upto n count all its set bits
1. brute force - have a loop that goes upto n
2. for every number in the iteration calculate the set bits
*/

/*void setBits(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        int temp = i;
        while(temp){
            temp = temp & (temp - 1);
            count++;
        }
    }
    printf("count = %d\n", count);
}

void main(){
    
    setBits(3);
}*/
