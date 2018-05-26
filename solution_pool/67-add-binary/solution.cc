class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int va = 0;
        int vb = 0;
        int vc = 0;
        string res;
        int carry=0;
        int reminder=0;
        while(i>=0||j>=0){
          va=i>=0?a[i]-'0':0;
          vb=j>=0?b[j]-'0':0;
          reminder = (va+vb+carry)%2;
          carry = (va+vb+carry)/2;

          res.push_back(reminder+'0');
          --i;
          --j;
        }
        if(carry>0){
            res.push_back(carry+'0');
        }
        
        std::reverse(res.begin(),res.end());
        return res;
    }
};
