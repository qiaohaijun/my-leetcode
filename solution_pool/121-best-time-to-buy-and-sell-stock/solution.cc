class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // guard
        if(prices.size() <2) {
            return 0;
        }
        
        int low = prices[0];
        int ret_max = 0;
        int cur_max = 0;
        for(int i=1;i<prices.size();++i) {
            if(prices[i] < low){
                low = prices[i];
            } else {
                cur_max = prices[i] -low;
                ret_max = std::max(cur_max, ret_max);
            }
        }
        return ret_max;
    }
};
