/*Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
Input: head = [1,2,2,1]
Output: true

Input: head = [1,2]
Output: false
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //2. reverse first half upto slow

 struct ListNode *reverseNode(struct ListNode *slow){
    struct ListNode *curr = slow, *prev = NULL, *next = curr->next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }

bool isPalindrome(struct ListNode* head) {
    if( head == NULL || head -> next == NULL){ //if no list or only one value in the list
        return true;
    }

    //1. find middle
    struct ListNode *slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *secondHalf = reverseNode(slow);
    struct ListNode *firstHalf = head;

    while(secondHalf != NULL){ //while(firstHalf->val != secondHalf->val is incorrect because it will not enter the loop if they are equal which is the opposite of palindrome)
        if(firstHalf->val != secondHalf->val){ //not palindrome
            return false;
        }
        else{
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

    }
    return true;


}

