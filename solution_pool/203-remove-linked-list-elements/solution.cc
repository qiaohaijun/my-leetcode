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
  ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy_node = new ListNode(-1);
    dummy_node->next = head;
    ListNode* prev_node = dummy_node;
    ListNode* cur_node = dummy_node->next;
    while(cur_node!=NULL)
    {
      if(cur_node->val == val){
        prev_node->next = cur_node->next;
        cur_node = prev_node->next;
      } else {
        prev_node = cur_node;
        cur_node = cur_node->next;
      }
    }
    return dummy_node->next;
  }
};
