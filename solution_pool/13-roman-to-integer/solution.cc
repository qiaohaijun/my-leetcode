class Solution {
public:
    int romanToInt(string str) {
      int count = 0;
      for(int i=0; i< str.length(); ++i){
        switch(str[i]){
          case 'I':
            if( str[i+1] == 'V' || str[i+1] == 'X'){
              count -= 1;
            } else{
              count += 1;
            }
            break;
          case 'X' :
            if(str[i+1] == 'L' || str[i+1] == 'C') {
              count -=10;
            } else {
              count +=10;
            }
            break;
          case 'C' :
            if(str[i+1] == 'D' || str[i+1] == 'M') {
              count -=100;
            } else {
              count +=100;
            }
            break;
          case 'V':
            count += 5;
            break;
    
          case 'L':
            count +=50;
            break;
          case 'M':
            count +=1000;
            break;
            
          case 'D':
            count +=500;
            break;

        }
      }
      return count ;
    }
};
