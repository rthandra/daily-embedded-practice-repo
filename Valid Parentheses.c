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
    
