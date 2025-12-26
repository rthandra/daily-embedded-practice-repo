int countSetBits(int n) {
   //find max of 2 less than or equal to n 
   
   if(n == 0){
       return 0;
   }
   //highest power of 2 less than n
   int x = 0;
   while((1<<x) <= n){
       x++;
   }
   x = x-1;
   
   int maxofbelown = (1 << (x-1)) * x ;
   int remainingMSB = n - (1 << x) + 1;
   int rest = n - (1<<x);
   int remainingBits = countSetBits(rest);
   
   int total = maxofbelown + remainingMSB + remainingBits ;
   
   return total;
   

  }  
