```c++
for(i=0;i<n;++i) {
 // 一旦有人比我大/或者比我小, 我就忍不了,一定要干掉
  while(!dq.empty() && a[i] <a[dq.back()]) {
    dq.pop_back();
  }
  dq.push_back(i);
  // 维护队列大小
  while (dq.back()-dq.front()+1>k){
    dq.pop_front();  
  }
}

```
