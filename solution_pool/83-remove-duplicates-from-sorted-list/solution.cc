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
    ListNode* deleteDuplicates(ListNode* head) {
      // guard
      if(head == NULL || head->next == NULL){
        return head;
      }
      
      ListNode * dummy = new ListNode(-1);
      dummy->next = head;
      ListNode* visitor_old = head;
      ListNode* visitor_new = dummy->next;
      while(visitor_old!=NULL){
        if(visitor_old->val == visitor_new->val){
          visitor_old = visitor_old->next;
        } else{
          visitor_new->next = visitor_old;
          visitor_new = visitor_new->next;
          visitor_old = visitor_old->next;
        }
      }
      visitor_new->next = NULL;
      return dummy->next;
      
    }
};
