#include <stdio.h>

//function pointer basic
/*
void add(int a, int b){
  printf("hello");
}

void sub(int a, int b){
  printf("ji");
}

typedef void(*ptr)(int, int);
int main() {
  //void(*ptr)(int, int);

  ptr fp;
  fp = &add;
  fp(1,2);

  fp = &sub;
  fp(3,3);

}
*/

//callback function
/*
void add(int a, int b){
  printf("add");
}

void sub(int a, int b){
  printf("sub");
}

void call(int a, int b, void(*ptr)(int, int)){
  ptr(a,b);
}

int main(){

  call(1, 2, &add);
  call(1, 2, &sub);

  return 0;
}
*/

//Embedded Style ISR
/*
void button_pressed(){
  printf("button pressed");
}

void callBack(void(*ptr)(void)){
  ptr();
}

int main(){
  callBack(&button_pressed);
}
*/

//returning function pointer
/*
typedef void(*ptr) (int, int);
ptr fp;

void add(int a, int b){
  printf("%d", a + b);
}

void sub(int a, int b){
  printf("%d", a - b);
}

ptr callBack(char a){
  if(a == '+'){
    return &add;
  } 
  else{
    return &sub;
  }

}
int main(){
  ptr fp = callBack('*'); //calls a function that returns a function address
  fp(2, 5);
}
*/

//array of function pointers
/*
int add(int a, int b){
  return a + b;
}
int sub(int a, int b){
  return a - b;
} 
int mul(int a, int b){
  return a * b;
}

int main(){
  int (*ptr[3])(int, int) = {&add, &sub, &mul};

  for(int i = 0; i < 3; i++){
    printf("%d\n", ptr[i](1,2));
  }
  return 0;
}
*/
