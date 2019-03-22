class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        map = dict()
        max_ret = 0
        for num in nums:
            if map.has_key(num)!= True:
                right = map.get(num+1,0)
                left = map.get(num-1,0)
                cur_len = right+left+1
                max_ret = max(cur_len,max_ret)
                # 更新边界情况.
                # num 和左右都不相连
                # num 和左相连和右不相连
                # num 和右相连和左不相连
                # num 和左右连接在一起
                map[num] = cur_len
                # 如果 right == 0 相当于原地更新
                map[num+right] = cur_len
                # 如果 left == 0 相当于原地更新
                map[num-left] = cur_len
        return max_ret
