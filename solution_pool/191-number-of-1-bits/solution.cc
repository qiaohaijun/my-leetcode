class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        int shift = 1;
        for(int i=0; i<32;++i){
            if((n & (shift << i)) !=0) {
                count ++;
            }
        }
        return count;
    }
};
