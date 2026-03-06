/*
intervals = [(0,30),(5,10),(15,20)]
Given an array of meeting time interval objects consisting of start and end times [[start_1,end_1],[start_2,end_2],...] (start_i < end_i), determine if a person could add all meetings to their schedule without any conflicts.

Note: (0,8),(8,10) is not considered a conflict at 8
*/




typedef struct{
  int start;
  int end;
}MeetingRoom;

int comp(const void *a, const void *b){
  return *(const int*)a - *(const int*)b;
}

void conflict(MeetingRoom *ptr, int s){
  qsort(ptr, s, sizeof(MeetingRoom), &comp);
  for(int i = 1; i < s; i++){
    if(ptr[i].start < ptr[i - 1].end){
      printf("false");
      return;
    }
  }
  printf("true");
}
int main(){

  MeetingRoom room[] = {{10,20}, {1,5}, {6,9}};
  int s = sizeof(room)/sizeof(room[0]);
  conflict(room, s);
  return 0;
}
