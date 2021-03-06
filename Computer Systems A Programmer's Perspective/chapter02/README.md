## 信息的表示和处理

- 计算机利存储和处理的信息为什么以二进制表示？

对于有十个手指的人类来说，十进制 表示法是很自然的事情。但是当构造存储和处理信息的机器时，二进制工作得更好。
因为二值信号能够很容易地被表示、存储和传递，例如可以表示为导线上的高电压和低电压，或者穿孔卡片上有洞或者无洞。对二值信号进行存储和执行计算的电子电路非常简单和可靠。

## 信息存储

- 大多数计算机使用8位的块（字节）作为最小的寻址单位，而不是访问内存中单独的位。

- 机器级程序将内存视为一个非常大的字节数组，称为虚拟内存。内存中每个字节都由一个唯一的数字来标识，称为它的地址。

- C语言中的指针与变量类似，也有值和类型。值代表某个对象的地址，类型代表那个位置上所存储的对象的类型。

### 十六进制表示法

- 为什么需要十六进制？

一个字节由8位组成，用二进制表示值域为：0000 0000～1111 1111，用十进制表示值域为：0～255。

这两种符号表示法对于描述位模式来说都很不方便，二进制太冗长，十进制与位模式互相转换太麻烦，替代的方法就是以16为基数来表示位模式。值域为：00～FF

这样一个字节可以用两个十六进制数字来表示。

### 字数据大小

每台计算机都有一个字长，用来表明指针数据的大小，它决定了虚拟地址空间的最大大小。32位字长限制虚拟地址空间为4G（2的32次方）扩展到64位使得虚拟地址空间扩展到16EB（2的64次方）

-- 指针运算时是按默认步长来走的，因此可以用int类型的变量来存储指针（针对32位机器）

### 寻址和字节顺序

对于跨越多个字节的对象，有两个规则：

- 如何存储？连续的字节序列
- 对象的地址用哪个字节？所使用字节中最小的地址

#### 大端法和小端法

