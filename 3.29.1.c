#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数二进制中不同位的个数
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = 0;
//	int ret = a^b;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		c++;//将两数异或在一起，求这个数二进制中1的个数
//	}
//	printf("c=%d\n", c);
//	return 0;
//}



//打印整数二进制的奇数位和偶数位（获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列）
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int a[32];
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = num % 2;
//		num /= 2;
//	}
//	printf("转换为二进制偶数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	printf("转换为二进制奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int num = 15;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//交换两个变量（不创建临时变量）
//int main()
//{
//	int a = 6;
//	int b = 8;
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d" ,a, b);
//
//	return 0;
//}

//统计二进制中1的个数

int Nnumberof1(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++；
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Nenberof1(num);
	printf("%d\n", ret);
	return 0;
}