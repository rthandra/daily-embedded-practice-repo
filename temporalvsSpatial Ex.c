#include <stdio.h>

void spatial(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

void temporal(int *arr, int size){
   for(int i = 0; i < size; i++){
       arr[0] += 1; //same memory location accessed multiple times
   }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    spatial(arr, size);
    temporal(arr, size);

    return 0;
}
