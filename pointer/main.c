#include <stdio.h>

int main() {
	int a = 10;//a在内存中要分配空间 四个字节 每个字节都有地址 但是取地址是四个字节第一个字节的开头
	//拿到连续空间的第一个地址
	printf("%p\n", &a);//%p专门用来打印地址的
	int *pa = &a;//pa是用来存放地址的，在C语言中叫指针变量
	//*说明pa是指针变量
	//int说明pa指向的对象是int类型的
	//指针就是指定存放位置
	*pa = 20;//解引用操作*pa就是通过pa里边的地址,找到a  可以通过指针在函数中同时传回 复数个参数
	//为什么要用指针？比如如果是数组的话，一个个改岂不是很麻烦？各有各的用处，改一个很麻烦，改一万个就非常好用
	printf("%d\n", a);
	
	char ch = 'w';
	char * pc = &ch;
	//*说明pc是指针变量
	//char说明pc指向兑现是char类型的
	//指针就是指定存放位置

	//指针变量的大小(下面全都是8字节因为我是64位计算机如果是32位计算机的话就是4字节)
	printf("%d\n",sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//指针的大小是相同的，指针是用来存放地址的！指针需要多大空间取决于地址的存储 有多大  32位机器是32bit组成的序列——4个字节（我的是64位机器 64bit位二进制数据——8个字节）
	return 0;
}

//指针 （可以写挂）
// 指针就是用来存储一个变量的地址的 指针就是地址
//内存   空间 和我们显示生活中的空间一样 每个空间都有一个地址（指针）
//内存是一块大的空间 
//1内存是怎么编号的
//2一个这样的内存单元是多大的空间
//我们的机器是32位机器 64位机器 
//32位-32跟地址线 -物理线-通电-1/0
//64位-64跟地址线
//电信号转换成数字信号：1和0组成的二进制序列
//地址线通电的电信号转换成二进制数列的就是地址 每个内存单元都给一个这样的地址有2^32 可以管理2^32个内存单元
//假设一个内存单元就是一个bit那就能管理2^32个bit
//最终一个字节给一个编号（STM32是四个字节给一个编号（一个寄存器是32位（4*8）））