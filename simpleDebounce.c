/*
  - clarifying questions: is there a set time we assume that the signal is stable?
  - after 20secs they become stable or is there a bouncing value?
  - what is the sampling method? - polling or interrupt driven
  - sampling rate? - how often is the function called?
  - one button or multiple buttons?
  10101011111111111
  prev bit 
  curr bit 
  if prev bit = curr bit and its been more than two seconds we take the value if its rising edge or falling

*/


int debounce(int inputBit){ //1010101000000
  static int prev;
  static int counter = 0;
  static int stable = 0;

  if(inputBit == prev){
    counter++;
  }
  else{
    counter = 0;
  }
  prev = inputBit;
  if(counter >= 20){
    stable = prev;
   
  }
   return stable;
}
