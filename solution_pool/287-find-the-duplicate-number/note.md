### 位运算的优先级
位运算的优先级要比其他操作符低, 为了更好的表达逻辑, 请使用 括号来显式的表达用途, 因为这个会留下坑.

### 二分法的下标问题
```
if (xx) 
{
 low = mid+1;
} else 
{
  high = mid;
}
```