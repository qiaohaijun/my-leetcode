class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        std::reverse(digits.begin(),digits.end());
        int carry = 0;
        int reminder = 0;
        vector<int> res;
        digits[0]++;
        for(int i=0;i<digits.size();++i){
            reminder = (carry + digits[i])%10;
            carry = (carry+digits[i])/10;
            res.push_back(reminder);
            
        }        
        if(carry!=0) {
            res.push_back(carry);
        }
        
        std::reverse(res.begin(),res.end());
        return res;
    }
};
