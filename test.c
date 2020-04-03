#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i = ++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

#include<stdlib.h>
//使用指针打印数组内容
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//字符串逆序
#include<string.h>
//void reverse(char* str)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
//
//int main()
//{
//	char arr[] = "I am a student";
//	reverse(arr);
//	printf("%s ", arr);
//	return 0;
//}



//求水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. i是几位数
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. i的每一位的位数次方和
//		tmp = i;
//		while (tmp)
//		{
//			//k = 10 ^ (n - 1);
//			//i = i/k
//			sum += pow(tmp % 1, n);
//			tmp /= 10;
//		}
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印一个菱形
void Print() 
{ 
	for (int i = 0; i < 7; i++) 
	{
		for (int j = 0; j < 7 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) 
		{
			printf("*");
		}
		printf("\n");
	}
	for (int l = 1; l <= 6; l++) 
	{
		for (int m = 0; m < l + 1; m++) 
		{
			printf(" ");
		}
		for (int n = 0; n < 13 - l * 2; n++) 
		{
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	Print();
	return 0;
}
