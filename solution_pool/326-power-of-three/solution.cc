class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int max3x = pow(3,19);
        return max3x%n==0?true:false;
    }
};
