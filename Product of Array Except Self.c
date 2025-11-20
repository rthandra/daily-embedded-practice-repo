/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    //calculating prefix and suffix of an array?

    int *arr = malloc(numsSize * sizeof(int));

    /*for(int i = 0; i <numsSize; i++){
        int pProduct = 1;
        int sProduct = 1;
        int result = 1;
        for(int p = 0; p < i ; p++ ){
            pProduct *= nums[p];
        }
        for(int s = i + 1; s < numsSize; s++){
            sProduct *= nums[s];
        }
        result = pProduct * sProduct;
        arr[i] = result;
    }

    *returnSize = numsSize;
    return arr;*/
    int p = 1;
    for(int i = 0; i < numsSize; i++){
        arr[i] = p;
        p *= nums[i];
    }

    int s = 1;
    for(int i = numsSize - 1; i >= 0; i--){
        arr[i] *= s;
        s *= nums[i];
    }
    
    *returnSize = numsSize;
    return arr;

    
}
