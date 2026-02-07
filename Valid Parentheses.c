/*20. Valid Parentheses
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false*/

bool isValid(char* s) {
    /* use a hashmap to store every opening bracket to its closing bracket is key
    add the values to the stack and pop if match is found
    */
    //create a loop to go over the string:
    
    int len = strlen(s);
    char stack[len];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            top++; //first increment
            stack[top] = s[i];
            
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            if(top == -1){
                return false;
            }
            int popped = stack[top];
            top--;
            if ((popped == '(') && (s[i] != ')') || (popped == '[') && (s[i] != ']') ||(popped == '{') && (s[i] != '}')) {
                return false;
            }
          
        }

    }
    if (top == -1){
        return true;
    }
    else{
        return false;
    }

/*
intialize stack - LIFO
loop until end of string:
    if its opening:
        push to stack
    or if its closed:
        compare the charactor to the last added character in the stack and check it its opening:
            if it is - pop the last character
            or if its not:
                return false
if the stack is empty: - popped all the values
    return true

EX: ']' - need to check this before checking tail with close bracket character
*/
  
bool isValid(char* s) {
    int len = strlen(s);
    int stack[len];
    int tail = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[tail++] = s[i];
        }
        else if (tail == 0 ||  (s[i] == ')' && stack[tail-1] != '(') || (s[i] == '}' && stack[tail-1] != '{') || (s[i] == ']' && stack[tail-1] != '[')){
            return false; //set tail to 0 and decrement? idk how to pop exactly 
        }
        else{
            tail--;;
        }
    }
    if(tail == 0){ //after popping all elements,
        return true;
    }
    else{
        return false;
    }   
    
}





*/
