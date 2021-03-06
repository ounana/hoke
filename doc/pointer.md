## 指针 Pointer
用来保存变量地址的变量，将变量c的内存地址赋值给 *p = &c，我们称p为指向c的指针。其值是该变量在内存中的地址，通过 *p来访问该内存地址的值。

内存地址：
计算机的每一个存储单元（字节），都有一个固定的编号，该编号也就是内存地址，指针就是拿到该编号赋值给指针变量。为什么会有指针单位，一个变量不可能用一个内存地址来存储，这时候单位可以表示向后取几个地址上的值。

### 使用指针变量
只能将内存地址赋值给指针变量，指针变量也是有类型的。通常数组就是一个典型的指针。
```c++
int c = 20;
//申明一个指针变量，&c访问变量的内存地址
int *p = &c;
//输出该内存地址
std::cout << p << endl;
//输出该内存地址的值
std::cout << *p << endl;
```
### 指针运算
指针的运算是内存地址的前后移动，只支持加法和减法，实际内存的移动需要根据指针单位所占字节数来加减。如果一个int类型的指针p指向地址1000，++p所得的地址就是1004，因为指针p的单位是int所占四个字节。

```c++
int c = 20;
int *p = &c;
//支持四种运算符 + - ++ --
//地址q也就是地址p向后移动4个字节
//因为一个int单位占4个字节
int *q = p + 1;
```

### 空指针
是一个常用的内存地址，其值是0，其地址是00000000，用NULL来表示。通常用来初始化指针，初始化指针是一个良好的习惯。