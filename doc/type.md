## 基本类型
```
  类型                                  后缀
  short           短整型
  int             整型       
  long            长整型                L | l
  long long   
  float           浮点型(单精度)         f | F
  double          浮点型(双精度)
  long double     浮点型(长双精度)
  char            字符

  长度 = sizeof(类型关键词)
  在不同的系统上，类型占据的字节长度是不同的。

```

## 浮点型
```
  -十进制小数形式 必须有小数点
  0.0 25.0 5.669 0.25 
  -指数形式 加阶码 e | E
  aEn (a为十进制数，n为十进制整数)
  2.1E5 (2.1 * 10的5次幂)
  3.7E-2 (3.7 * 10的-2次幂)

  浮点数允许使用后缀：f | F
  如356f和356.是等价的

  -在内存中的存放形式：
  4个字节，32位内存空间。按指数形式存储。
  3.14159在内存中存放形式如下
  符号  小数部分  指数部分
  +     .314159  1
  小数部分占的位数越多，精度越高
  指数部分占得位越多，数值范围越大
```

## unsigned | signed | void
```
  无符号型 unsigned
    不包含负数
    unsigned int num;
    0 ~ pow(2, sizeof(int) * 8) - 1
  有符号型 signed
    包含负数，声明变量时默认为有符号型
    pow(2, sizeof(int) * 8)/2 * -1 ~ pow(2, sizeof(int) * 8)/2 - 1
```

## 类型强转
```
  (type_name) expression

  例子：
  int sum = 17, count = 5;
  double mean;
  mean = (double)sum / (double)count;
  printf("%f", mean);
```