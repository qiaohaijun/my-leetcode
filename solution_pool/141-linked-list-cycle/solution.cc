/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      // guard
      if(head == NULL || head->next == NULL) {
        return false;
      }
      
      ListNode * slow = head;
      ListNode * fast = head;
      
      while(slow!=NULL && fast!=NULL) {
        
        if(fast->next!=NULL && fast->next->next!=NULL){
          fast = fast->next->next;
          
        } else{
          return false;
        }
        
        slow = slow->next;
        
        if(slow == fast) {
          return true;
        }
      }
        
    }
};
