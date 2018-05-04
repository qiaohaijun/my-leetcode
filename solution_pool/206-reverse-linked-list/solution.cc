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
    ListNode* reverseList(ListNode* head) {
      // guard
      if(head==NULL || head->next == NULL){
        return head;
      }
      
      
      
      // set up dummy node
      ListNode* dummy = new ListNode(-1);
      //dummy->next = head;
      
      ListNode* iterator = head;
      while(iterator != NULL){
        ListNode* next_node = iterator->next;
        iterator->next = dummy->next;
        dummy->next = iterator;
        
        iterator = next_node;
      }
      
      return dummy->next;
    }
};
