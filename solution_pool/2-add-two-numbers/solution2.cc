/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// remainder 余数
// carry 进位

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
      ListNode* dummy = new ListNode(-1);
      ListNode* res = dummy;
      
      int remainder = 0;
      int carry = 0;
      
      int adder1=0;
      int adder2=0;
      
      while(l1!=NULL || l2!=NULL) {
        adder1=l1!=NULL?l1->val:0;
        adder2=l2!=NULL?l2->val:0;
        int sum = carry + adder1 + adder2;
        remainder = sum % 10;
        carry = sum / 10;
        res->next = new ListNode(remainder);
        l1 = l1!=NULL?l1->next:NULL;
        l2 = l2!=NULL?l2->next:NULL;
        res=res->next;
      }
      

      if(carry>0) {
        res->next = new ListNode(carry);
      }
      return dummy->next;
    }
};
