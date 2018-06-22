这个题目真是让人大开眼界.

```
map<RandomListNode*, RandomListNode*> map

```

这个map的数据结构, 巧妙.


### 我的原始思路
```
map<RandomListNode*, int*> node2id;
map<id, RandomListNode*> id2node;
```

这个就要别ptr到ptr的映射直接.
