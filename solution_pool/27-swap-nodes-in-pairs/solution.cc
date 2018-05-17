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
    ListNode* swapPairs(ListNode* head) {
      // guard
      if(head==NULL || head->next == NULL){
        return head;
      }
      
      ListNode * dummy = new ListNode(-1);
      dummy->next = head;
      ListNode * pre = dummy;
      ListNode * first = NULL;
      ListNode * second = NULL;
      
      // while loop
      while(pre->next!=NULL && pre->next->next!=NULL) {
        first = pre->next;
        second = pre->next->next;
        // exchange
        first->next = second->next;
        second->next = first;
        pre->next = second;
        
        pre = pre->next->next;
      }
      return dummy->next;
    }
};
