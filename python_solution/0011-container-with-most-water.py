class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        # 初始化
        
        l = 0
        r = len(height)-1
        max_area = 0
        
        while l<r:
            cur_area = (r-l)*min(height[l],height[r])
            max_area = max(max_area, cur_area)
            # 可以证明
            # 如果高度小, 就要向中间凑
            if height[l]>height[r]:
                r = r-1
            else:
                l = l+1
        return max_area
