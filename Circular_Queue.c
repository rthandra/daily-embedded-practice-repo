/*
core logic - need to know when the queue is full and then pop items from start
why mod if it stops at full? because otherwise it will go out of bounds

1, 2, 3 % would make it go to 0th index otherwise increments and eventually out of bounds

push, when queue is full, end push fun
pop, if count is 0-nothing left to pop
return popped value, increment head and decrease count
so in this case count goes from 5->0, indicating all values are popped
*/

#include <stdio.h>
#define MAX 5

typedef struct Circular{
    int arr[MAX];
    int head;
    int tail;
    int count;
}CircularQueue;

void push(CircularQueue *ptr, int val){
    if(ptr->count == MAX){ //queue full
        return;
    }
    ptr->arr[ptr->tail] = val;
    ptr->tail = (ptr->tail + 1) % MAX;
    ptr->count++;
}

/*
void printCircular(CircularQueue *ptr){
    for(int i = 0; i < MAX; i++){
        printf("%d\n", ptr->arr[i]);
    }
    
}

*/
int pop(CircularQueue *ptr, int *val){
    //if(ptr->head == ptr->tail){
    if(ptr->count == 0){ //empty queue
        return -1;
    }
    *val = ptr->arr[ptr->head];
    ptr->head = (ptr->head + 1) % MAX;
    ptr->count--;
    
    //ptr->tail = (ptr->head + 1) % MAX;
}
int main() {
   
   CircularQueue cq;
   cq.head = 0;
   cq.tail = 0;
   cq.count = 0;
   
   push(&cq, 1);
   push(&cq, 5);
   push(&cq, 7);
   push(&cq, 10);
   push(&cq, 12);
   push(&cq, 17);
   push(&cq, 18);
   //push(&cq, 156);
   
   //printCircular(&cq);
   int popped_val = 0;
   while(pop(&cq, &popped_val) != -1){ //while ( -1 != -1 )
       printf("%d\n", popped_val); //*val stores the data in popped val
   }
 
    return 0;
}
