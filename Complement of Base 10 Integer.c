int bitwiseComplement(int n) {
    //compliment only upto highest set bit
    //1. create a mask - length of n, should be all ones, while temp is true u want to append 1 to it 
    //2. create a loop to check n
    if(n == 0){
        return 1;
    }
    int temp = n;
    int mask = 0;

    while(temp){
        mask =  (mask << 1)|1; //mask is formed until n is not 0 which forms its length
        temp = temp >> 1;
    }
    
    n = n ^ mask;
    return n;
   
}
