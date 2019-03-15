# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        
        dummy_head = ListNode(0)
        dummy_list = dummy_head
        if l1 is None and l2 is None:
          return None
        elif l1 is None:
          return l2
        elif l2 is None:
          return l1
        
        carry = 0
        
        while l1 is not None and l2 is not None:
          my_val = l1.val+l2.val+carry
          carry = my_val//10
          my_val = my_val %10
          node = ListNode(my_val)
          l1 = l1.next
          l2 = l2.next
          dummy_list.next = node
          dummy_list = dummy_list.next
          
        while l1 is not None:
          my_val = l1.val+carry
          carry = my_val//10
          my_val = my_val%10
          node = ListNode(my_val)
          l1 = l1.next
          dummy_list.next = node
          dummy_list = dummy_list.next
          
        while l2 is not None:
          my_val = l2.val+carry
          carry = my_val//10
          my_val = my_val%10
          node = ListNode(my_val)
          l2 = l2.next
          dummy_list.next = node
          dummy_list = dummy_list.next
          
          
        if carry > 0:
          node = ListNode(carry)
          dummy_list.next = node
        
        return dummy_head.next
        
