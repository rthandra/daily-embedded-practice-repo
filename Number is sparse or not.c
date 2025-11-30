Given a number n. You have to check whether it is sparse or not.
Note: A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
2 is but 3 is not cause 11
*/

void noIsSparse(int n){
    
    while(n){
        if((n & 1) && (n & (1<<1))){
            printf("number is not sparse");
            return;
        }
        else{
            n = n>>1;
        }
    }
    printf("number is sparse");
}


int main(){
    
    noIsSparse(5);
    return 0;
}

