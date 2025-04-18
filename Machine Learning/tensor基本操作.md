**以下都在torch下**

arange(12) --> [1:12]

基本+ - * / 如果不相同的维数不行， 但是维数相同，但是具体的大小不同，[1,  3] [2, 1] --> [2, 3] [2, 3] 补齐的位置是直接复制原tensor的内容

shape给出每个维度的大小

reshape([input],(tuple))

ones/zeros (tuple)

cat(tensor_x, tensor_y, dim = 0/1/2)

tensor_x == tensor_y

sum() 每个元素相加

*索引*

x[-1/1:3,  :   , ::1  ]

不开新的空间的原地操作

```
Z = torch.zeros_like(Y)

Z[ : ] = X +Y
```

单元素可以直接强制转换

