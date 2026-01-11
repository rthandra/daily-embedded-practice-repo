 /*
int pivotIndex(int* nums, int numsSize) {
    /* brute force: have two counters, one from start and one of end and iterate until they meet, if their sum is equal, its the pivot index if not return -1
    */
    /*for(int i = 0; i < numsSize; i++){
        int leftCount = 0;
        for(int j = 0; j < i; j++){
            leftCount += nums[j];
        }

        int rightCount = 0;
        for(int k = i+1; k < numsSize; k++){
            rightCount += nums[k];
        }

        if(leftCount == rightCount){
            return i;
            break;
        }
    }

    return -1;*/

    /*
        optimal: 1. compute entire sum of array
                 2. right sum would be total sum - right sum - nums[i], so u dont have to loop for right only leftsum
                 3. leftsum is sum
    */

 /*   //calculate total sum
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    //looping through pivot index
    int leftSum = 0;
    for(int i = 0;  i  < numsSize; i++){
        sum -= nums[i]; //calculating right sum by subtracting upto pivot index value
        if(sum == leftSum){
            return i;
            break;
        }
        leftSum += nums[i];
       
    }
    return -1;

   
}
*/
