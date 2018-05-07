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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
      ListNode* dummy = new ListNode(-1);
      dummy->next = head;
      ListNode* fast = head;
      ListNode* slow = head;
      ListNode* slow_pre = dummy;
      while(n>0){
        fast = fast->next;
        --n;
      }
      
      while(fast!= NULL) {
        fast = fast->next;
        slow = slow->next;
        slow_pre = slow_pre->next;
      }
      
      slow_pre->next = slow->next;
      return dummy->next;
        
    }
};
