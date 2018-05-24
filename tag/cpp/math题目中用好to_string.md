使用std::to_string() 可以简化很多math的算法. 当然效率就不一定很好了.

比如每位相加, 如果使用取模
```
while(num>0){
 a = num%10;
 num = num/10;
}
```

---

如果使用std::to_string

n_str = std::to_string(num);
for(int i=0; i<n_str.size(); ++i){
 a = n_str[i]-'0';
}

怎么说呢, 代码其实不差多少, 怎么算都行吧.
