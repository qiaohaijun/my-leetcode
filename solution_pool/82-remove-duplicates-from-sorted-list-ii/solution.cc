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
      if(head == NULL || head->next == NULL) {
        return head;
      }
      
      ListNode * dummy = new ListNode(-1);
      
      std::map<int,bool>* hashmap = new std::map<int, bool>();
      ListNode * visitor = head;
      while(visitor != NULL) {
        auto map_it = hashmap->find(visitor->val);
        if(map_it == hashmap->end()) {
          hashmap->insert(std::pair<int,bool>(visitor->val, false));
        } else {
          map_it->second = true;
        }
        visitor= visitor->next;
        
      }
      visitor= head;
      ListNode* visitor_dummy = dummy;
      while(visitor!=NULL){
        auto map_it = hashmap->find(visitor->val);
        if(map_it->second == false) {
          visitor_dummy->next = visitor;
          visitor=visitor->next;
          visitor_dummy= visitor_dummy->next;
        } else{
          visitor=visitor->next;
        }
        

        
      }
      
      visitor_dummy->next = NULL;
      return dummy->next;
    }
};
