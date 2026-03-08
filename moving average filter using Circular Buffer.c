/*
Design a moving average filter that returns the average of the last N sensor readings from a data stream.
[1,2,3,4,5] N = 3 , reads 3,4,5

 - clarifying questions: what happens to N when you add values beyond N
 - blocking or non blocking sensor streaming?
 - values are positive, negative, int, float?\
 - what happens when elements are less than N? [1,2, ....], N = 3 but no three elements
 - is N fixed?
*/

#define SIZE 4
#define N 3

typedef struct{

  int arr[SIZE];
  int head;
  int tail;
  int count;
}Buff;

int isFull(Buff *Circular){
  if(Circular->count == SIZE){
    return -1;
  }
  return 0;
}

int isEmpty(Buff *Circular){
  if(Circular->count == 0){
    return -1;
  }
  return 0;
}

int push(Buff *Circular, int val){
  static int sum;
  if(isFull(Circular)){
    int temp = 0;
    pop(Circular, &temp);
  }
  Circular->arr[Circular->tail] = val;
  Circular->tail = (Circular->tail + 1) % SIZE;
  Circular->count++;
  sum += Circular->arr[(Circular->tail + SIZE -1)  % SIZE];
  if(Circular->count >= N){ //apply the filter
    /*
    int end = (Circular->tail + SIZE - 1) % SIZE; //tail points to the next slot to add // % SIZE cause end can become -1 if tail = 0
    int start = (end + SIZE  - (N - 1)) % SIZE;
    int avg = 0; 
    //for(int i = start; i <= end; i++){ i <= end is wrong, if end is at 0 and start at 4 loop wont run
    for(int i = 0; i < N; i++){
      avg += Circular->arr[(start + i) % SIZE];
    }
    printf("%d\n", avg/N);
  }*/

  //using sliding window
  //[1,2,3,4],
    int avg = 0;
    avg = sum;
    printf("%d\n", avg/N);
    sum += 0;
    int right = (Circular -> tail + SIZE - 1) % SIZE;
    int left =  (right - N + SIZE) % SIZE;
     sum -= Circular->arr[left];
  }
  return 0;
}

int pop(Buff *Circular, int *popped){
  
  if(isEmpty(Circular) == -1){
    return -1; 
  }
  *popped = Circular->arr[Circular->head];
  Circular->head = (Circular->head + 1) % SIZE;
  Circular->count--;

  return 0;
}

int main(){

  Buff Circular;
  Circular.count = 0;
  Circular.head = 0;
  Circular.tail = 0;

  push(&Circular, 1);
  push(&Circular, 2);
  push(&Circular, 3);
  push(&Circular, 4);
  push(&Circular, 5);
  push(&Circular, 2);


  //pop(&Circular, &popped);


  return 0;
}
