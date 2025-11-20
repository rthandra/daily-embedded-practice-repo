/*Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    
    int *arr = malloc((n + 1) * sizeof(int));
    //int count = 0;
    arr[0] = 0; //needs to be intialized because arr[0>>1] will contain garbage memory
    
    for(int i = 1; i <= n; i++){

        arr[i] = arr[i>>1] + (i&1);
        /*int temp = i;
        while(temp){  //calculate set bits
            temp = temp & (temp - 1);
            count++;
        }
        arr[i] = count;
        count = 0;*/
    }

    *returnSize = n + 1;
    return arr;

}
