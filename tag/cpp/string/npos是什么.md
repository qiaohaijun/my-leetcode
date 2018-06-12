c++中的很多api确实有些费解. 

map.find()
如果找不到返回的是 map.end();

```
strA.find(strB);
if(strA.find(strB)!=string:npos)
string::size_type pos = strA.find(strB);
```

string::npos的定义

```
static const size_type npos = -1;
```

---

需要注意的是 string::npos的类型性质.

标准做法.
```
if (str.find("abc") == string::npos) { ... }
```
