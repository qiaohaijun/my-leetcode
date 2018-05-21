class Solution {
public:
    bool isValid(string s) {
      if(s.length()%2!=0){
        return false;
      }
      
      stack<char> my_stack;
      for(int i=0; i< s.length();++i){
        
        if ( s[i] =='[' || s[i]=='{' || s[i]=='(' ){
          my_stack.push(s[i]);
        } 
        
        if(s[i]==']'){
          if(my_stack.empty()){
            return false;
          }
          if(my_stack.top() == '['){
            my_stack.pop();
            continue;
          } else{
            my_stack.push(s[i]);
          }
        }
        
        else if(s[i]==')'){
          if(my_stack.empty()){
            return false;
          }
          
          if(my_stack.top() == '('){
            my_stack.pop();
            continue;
          } else{
            my_stack.push(s[i]);
          }
        }
        else if(s[i]=='}'){
          if(my_stack.empty()){
            return false;
          }
          if(my_stack.top() == '{'){
            my_stack.pop();
            continue;
          } else{
            my_stack.push(s[i]);
          }
        }
        
      }
      
    return my_stack.empty()?true:false;
        
    }
};
