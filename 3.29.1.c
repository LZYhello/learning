#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������������в�ͬλ�ĸ���
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = 0;
//	int ret = a^b;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		c++;//�����������һ�����������������1�ĸ���
//	}
//	printf("c=%d\n", c);
//	return 0;
//}



//��ӡ���������Ƶ�����λ��ż��λ����ȡһ���������������������е�ż��λ������λ���ֱ��ӡ�����������У�
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int a[32];
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = num % 2;
//		num /= 2;
//	}
//	printf("ת��Ϊ������ż��λ��");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	printf("ת��Ϊ����������λ��");
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

//����������������������ʱ������
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

//ͳ�ƶ�������1�ĸ���

int Nnumberof1(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++��
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