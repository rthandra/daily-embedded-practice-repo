void transpose(int n, int arr[n][n]){
  
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

   for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d", arr[i][j]);
    }
 }
}

int main() {
  int n = 3;
  int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  transpose(n, arr);
  return 0;
}
