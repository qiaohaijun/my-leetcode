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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
      // guard 
      if(head==NULL){
        return head;
      }
      
      // reverse num
      int num_r = n-m+1;
      
      ListNode* dummy = new ListNode(-1);
      ListNode* preHead = dummy;
      dummy->next = head;
      
      
      
      while(m>1){
        preHead = preHead->next;
        head = head->next;
        m--;
      }
      // reverse
      
      ListNode* curHead = preHead->next;
      
      while(num_r>1) {
        
        ListNode* p = preHead->next;
        preHead->next = curHead->next;
        curHead->next = curHead->next->next;
        preHead->next->next=p;
        num_r--;
      
      }
      
      return dummy->next;
      
      
    }
};
