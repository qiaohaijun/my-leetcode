### python的默认行为是引用
在python进行像b = a这样的赋值时，只会创建一个对a的新引用，使a的引用计数加1，而不会创建新的对象：


```python
>>> a = 'xyz'
>>> import sys
>>> sys.getrefcount(a)
3
>>> b = a
>>> sys.getrefcount(b)
4
>>> id(a)
88292288L
>>> id(b)
88292288L
```

#### 这里需要注意的是两个函数
1. sys.getrefcount(xyz)
2. id(xyz)

### 可变对象
1. list
2. set
3. dict
```python
>>> a = [1, 2, 3, 4]
>>> b = a
>>> b.append(5)
>>> a
[1, 2, 3, 4, 5]
```
因为python的默认行为是`ref`.所以需要显式的`copy`操作

因为a和b引用的是同一对象，改变其中一个，另外一个也会随之改变。当我们想建立一个副本而不是引用时，可以复制对象。


---



### link
- https://www.cnblogs.com/linxiyue/p/7970287.html
