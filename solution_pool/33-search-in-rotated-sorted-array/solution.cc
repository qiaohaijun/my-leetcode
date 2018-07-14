class Solution {
public:
#define val(x) (x<nums[0]? x+0x3f3f3f3f:x)
    int search(vector<int>& nums, int target) {
        int l = 0, r = (int)nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (val(nums[mid]) > val(target)) r = mid - 1;
            else if (val(nums[mid]) < val(target)) l = mid + 1;
            else return mid;
        }
        return -1;
    }
};
