class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int sizem=haystack.size();
        int sizen=needle.size();
        if(sizem<sizen) return -1;
        for(int i=0;i<=sizem-sizen;i++){
            int j=0;
            for(j=0;j<sizen;j++){
                if (needle[j]!=haystack[i+j]) break;
            }
            if(j==sizen) return i;
        }
        return -1;
    }
};
