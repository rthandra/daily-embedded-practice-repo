/* brute force
void arrLeader(int *arr, int size){
    int output[size];
    int n = size;
    int flag = 0;
    int k = 0;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i] > arr[j]){
               flag = 0;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            output[k] = arr[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++ ){ //printing output 
        printf("output[] = %d\n", output[i]);
    }
}
int main(){
    
    int arr[]={1,40,4,10,7,9,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    arrLeader(arr, size);
}*/

//optimized method

/*void reverse(int *output, int size){
    int l = 0;
    int r = size-1;
    int temp = 0;
    while(l<r){
        temp = output[l];
        output[l] = output[r];
        output[r] = temp;
        l++;
        r--;
    }
}
void arrLeader(int *arr, int size){
    int output[size];
    int max = 0;
    int k = 0;
    
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] >= max){
            max = arr[i];
            output[k] = arr[i];
            k++;
        }
    }
    reverse(output, k);
    for(int i = 0; i < k; i++ ){ //printing output 
        printf("output[] = %d\n", output[i]);
    }
}


int main(){
    
    int arr[]={1,40,4,10,7,9,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    arrLeader(arr, size);
}*/
