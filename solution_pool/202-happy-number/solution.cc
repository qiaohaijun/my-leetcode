class Solution {
public:
    int get_next(int n){
      int sum = 0;
      string n_str =  std::to_string(n);
      for(int i=0; i< n_str.size(); ++i){
        int num = n_str[i]-'0';
        sum += num*num;
      }
      return sum;
    }
  
    bool isHappy(int n) {
      set<int> my_set;
      int next_num=n;
      while(true){
        if(next_num==1) {
          return true;
        }
        
        next_num = get_next(next_num);
        auto it = my_set.find(next_num);
        if(it!=my_set.end()){
          return false;
        } else{
          my_set.insert(next_num);
        }
        
      }
      
    }
};
