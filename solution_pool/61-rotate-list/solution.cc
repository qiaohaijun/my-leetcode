class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
       // guard
        if (!head) return NULL;
        int len = 0;
        ListNode *cur = head;
        while (cur!=NULL) {
            ++len;
            cur = cur->next;
        }
      
        k= k%len;
        if(k==0) {
          return head;
        }
      
        ListNode* fast = head;
        ListNode* slow = head;
      
        for (int i = 0; i < k; ++i) {
            if (fast!=NULL) {
              fast = fast->next;
            }
        }
      
        // if (fast==NULL) {
        //   return head;
        // }
      
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
      
        fast->next = head;
        fast = slow->next;
        slow->next = NULL;
        return fast;
    }
};
