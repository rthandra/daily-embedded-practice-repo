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
//rectangular array
/*
void transpose(int n, int m, int arr[n][m]){

  int matrix[m][n];

  for(int i = 0; i < m; i++){ // you want m rows, n cols
    for(int j = 0; j < n; j++){
      matrix[i][j] = arr[j][i]; //transpose
    }
  }  

   for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d", matrix[i][j]);
    }
 }
}

int main() {
  int n = 3;
  int m = 2;
  int arr[3][2] = {{1,2}, {4,5}, {7,8}}; //147, 258
  transpose(n, m, arr);
  return 0;
}

*/

//2d square transpose using dynamic arr
/*
void transpose(int n, int (*arr)[n]){
  
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
  int (*arr)[n] = malloc(n * n * sizeof(int));
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      arr[i][j] = 1;
    }
  }
  transpose(n, arr);
  free(arr);
  return 0;
}
*/

//2d dynamic rectangular transpose

void transpose(int n, int m, int (*arr)[m]){

  int (*matrix)[n] = malloc(m * n * (sizeof(int)));
  
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      matrix[i][j] = arr[j][i];
    }
  }

   for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d", matrix[i][j]);
    }
 }
}

int main() {
  int n = 3;
  int m = 2;
  int (*arr)[m] = malloc(m * n * sizeof(int));
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      arr[i][j] = i * m + j + 1;
    }
  }

  transpose(n,m, arr);
  free(arr);
  return 0;
}
