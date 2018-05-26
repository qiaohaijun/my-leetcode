class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x^y;
        int count= __builtin_popcount(diff);
        return count;
    }
};
