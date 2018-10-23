1. dict.clear()
2. dict.pop()
3. dict.popitem()

### dict.clear()
`clear()`方法是用来清除字典中的所有数据，因为是原地操作，所以返回 `None`.

```bash
>>> x['name'] = 'lili'
>>> x['age'] = 20
>>> x
{'age': 20, 'name': 'lili'}
>>> returned_value = x.clear()
>>> x
{ }
>>> print returned_value
None
```

#### 字典的引用
字典的clear()方法有什么特点：

当原字典被引用时，想清空原字典中的元素，用clear()方法，a字典中的元素也同时被清除了。


```
>>> f = {'key':'value'}
>>> a = f
>>> a
{'key': 'value'}
>>> f.clear()
>>> f
{}
>>> a
{}

```
### dict.pop()
移除字典数据pop()方法的作用是：
1. 第一步: 删除指定给定键所对应的值
2. 第二步: 返回这个值并从字典中把它移除。

这个和`c++`用法很像.

```python
>>> x = {'a':1,'b':2}
>>> x.pop('a')
1
>>> x
{'b': 2}
```

### dict.popitem()
随机返回并删除字典中的一对键和值（项）。为什么是随机删除呢？因为字典是无序的，没有所谓的“最后一项”或是其它顺序。
在工作时如果遇到需要逐一删除项的工作，用popitem()方法效率很高。

```python
>>> x
{'url': 'www.iplaypy.com', 'title': 'python web site'}
>>> x.popitem()
('url', 'www.iplaypy.com')
>>> x
{'title': 'python web site'}
```
