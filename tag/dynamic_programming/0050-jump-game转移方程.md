```
 jump[i] = max(jump[i-1], A[i-1]) -1, i!=0  
         = 0 , i==0  
```

开始的时候没有看明白这个方程的名堂, 现在懂了
```
1:  bool canJump(int A[], int n) {  
2:      // Start typing your C/C++ solution below  
3:      // DO NOT write int main() function  
4:      int* jump = new int[n];  
5:      jump[0] = 0;  
6:      for(int i=1; i < n; i++)  
7:      {  
8:        jump[i] = max(jump[i-1], A[i-1]) -1;  
9:        if(jump[i] <0)  
10:          return false;;  
11:      }  
12:      return jump[n-1] >=0;  
13:    }  
```

其中的第9行的判断, 保证了一种情况, 如果跳不到该位置, 就结束.
