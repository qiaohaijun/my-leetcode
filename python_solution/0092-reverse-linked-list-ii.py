# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        dummy_node = ListNode(0)
        dummy_node.next = head
        pre_node = dummy_node
        cur_node = dummy_node.next
        
        # 找到指定位置
        for i in range(0,m-1):
            pre_node = pre_node.next
            cur_node = cur_node.next
        
        # 执行前插法操作
        # 注意这里使用`moving_node`替代了`tmp_node`
        # 好处显而易见, 明确的表明了这个节点的状态
        for i in range(n-m):
            moving_node = cur_node.next
            cur_node.next = moving_node.next
            moving_node.next = pre_node.next
            pre_node.next = moving_node
        return dummy_node.next
