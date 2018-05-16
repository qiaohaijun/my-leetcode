class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      // sliding windows
      int ret{0};
      
      int fast = 0;
      int slow = 0;
      int max = 0;
      map<char,int> hashmap;
      
      while(slow < s.length() && fast< s.length()){
        
        auto map_it = hashmap.find(s[fast]);
        // find dup
        if(map_it!=hashmap.end()) {
          hashmap.erase(s[slow]);
          slow++;
        } else{
          hashmap[s[fast]] = fast;
          fast++;
          max = std::max(fast-slow,max);
        }
        
      }
      return max;
        
    }
};
