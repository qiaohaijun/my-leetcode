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

### dict.pop()


### dict.popitem()
