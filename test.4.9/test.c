#define _CRT_SECURE_NO_WARNINGS 1
//三种方法模拟实现C语言库函数strlen
//1,计数器法
# include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char* arr = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//指针—指针法
//int my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//第一个字符的地址减去起始字符的地址就时数组元素的个数
//}
//int main()
//{
//	char* arr = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//递归法
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else 
//		return 1 + my_strlen(str++);
//}
//
//int main()
//{
//	char* arr = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}


//模拟实现库函数strcpy,字符串的拷贝

char* mystrcpy(char *des, const char * sour)    //const使参数sour就指向str2
{
	char* p = des;
	assert(sour);
	assert(des);                // 断言，判断指针变量是否为空
	while (*des = *sour)   //以'\0'做判断条件
	{
		des++;
		sour++;
	}
	return p;      //防止指向错误
}
int main()
{
	char str1[20] = {0}; //目标空间  （为了检测'\0'是否拷贝成功）
	char str2[] = "i am a boy"; // 源字符串
	mystrcpy(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	system("pause");
	return 0;
}


