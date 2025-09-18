nt pivotIndex(int* nums, int numsSize) {
    int leftSum = 0;
    int total = 0;

    for (int i = 0; i<numsSize; i++){
        total = total + nums[i];
    }
    printf("%d", total);

    for(int i = 0; i<numsSize; i++){
        int rightSum = total - leftSum - nums[i];
        
        if(leftSum == rightSum){
            return i; //found the pivot
        }
        leftSum = leftSum + nums[i]; 
    }
    return -1;
}
