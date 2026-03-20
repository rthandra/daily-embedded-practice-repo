#include <stdio.h>
/*
Print the smallest of three elements in an array in C with time complexity O[n] - [No nested for loops, no inbuilt qsort] 



edge cases: can the values be negative? yes
is the array sorted? no
what are the constraints?
can we use a sort function? - No sorting taks nlogn

current brute force - o(n) but not single pass

/*
void smallest(int *arr, int size){
  int small1 = arr[0];
  int small2 = arr[0];
  int small3 = arr[0];

  for(int i = 1; i < size; i++){
    if(arr[i] < small1){
      small1 = arr[i];
    }
  }
  printf("%d\n", small1);
  for(int j = 1; j < size; j++){
    if(arr[j] != small1 && arr[j] < small2){
      small2 = arr[j];
    }
  }
  printf("%d\n", small2);
  for(int k = 1; k < size; k++){
    if(arr[k] < small3 && arr[k] != small1 && arr[k] != small2){
      small3 = arr[k];
    }
  }
  printf("%d\n", small3);
}


int main(){

  int arr[] = {10, 4, -3, 0, 8, 1}; 
  int size = sizeof(arr)/sizeof(arr[0]);

  smallest(arr, size);


  return 0;
}
*/
