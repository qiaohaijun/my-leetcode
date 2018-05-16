class Solution {  
public:  
    /** 
    * @param s: a string 
    * @return: an integer 
    */  
    int lengthOfLongestSubstring(string s) {  
        // write your code here  
        int ret = 0;  
        map<char, int> m;  
        int start = 1;  
        for (int i = 1; i <= s.length(); i++)  
        {  
            char c = s[i - 1];  
            if (m[c] >= start)  
            {  
                start = m[c] + 1;  
                m[c] = i;  
  
            }  
            else  
            {  
                m[c] = i;  
                ret = max(ret, i - start + 1);  
            }  
  
        }  
        return ret;  
    }  
};  
