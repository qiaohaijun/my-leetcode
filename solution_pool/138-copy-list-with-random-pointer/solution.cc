/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
      // guard
      if(head==NULL){
        return NULL;
      }
      // if(head->next == NULL){
      //   return NULL;
      // }

      RandomListNode* walker = head;
      RandomListNode* dummy = new RandomListNode(-1);
      
      
      std::map<RandomListNode*,RandomListNode*> hash;


      walker = head;
      RandomListNode* copy_walker=dummy;
      
      while(walker!=NULL){
        RandomListNode* new_node  = new RandomListNode(walker->label);
        std::cerr << walker->label << std::endl;
        hash[walker]= new_node;
        
        copy_walker->next = new_node;
        copy_walker=copy_walker->next;
        
        walker=walker->next;
      }
      
      copy_walker= dummy->next;
      walker = head;
      while(copy_walker!=NULL){
        copy_walker->random = hash[walker->random];
        copy_walker=copy_walker->next;
        walker=walker->next;
      }
      return dummy->next;
    }
};
