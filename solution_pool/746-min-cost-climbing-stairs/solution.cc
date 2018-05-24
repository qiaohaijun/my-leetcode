class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      vector<int> opt(cost.size(),0);
      opt[0] = cost[0];
      opt[1] = cost[1];
      
      for(int i=2;i<cost.size();++i){
        opt[i] = std::min(opt[i-1]+cost[i],opt[i-2]+cost[i]);
      }
      return std::min(opt[cost.size()-1], opt[cost.size()-2]);
      
    }
};
