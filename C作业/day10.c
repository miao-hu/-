1. 
写一个函数返回参数二进制中 1 的个数 
比如： 15 0000 1111 4 个 1 
程序原型： 
int count_one_bits(unsigned int value) 
{ 
// 返回 1的位数 
} 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count = 0;
	int i;
	printf("请输入一个数:");
	scanf("%d", &i);
	while (i != 0)
	{
		if (i % 2 == 1)
		{
			count++;
			i = i / 2;
		}
		else  i = i / 2;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}


2.获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[32] = { 0 };
	int a,i=0,j=0;
	printf("请输入一个数：");
	scanf("%d", &a);
	while (a != 0)
	{
			if (a % 2 == 1)
			{
				a = a / 2;
				arr[i++] = 1;
			}
			else
			{
				a = a / 2;
				arr[i++] = 0;
			}
	
	}
	j = i;
	printf("奇数位为：");
	for (i=i-1; i >= 0; i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("偶数位为：");
	for (j = j - 2; j >= 0; j -= 2)
	{
		printf("%d ", arr[j]);
	}
	system("pause");
	return 0;
}


3. 输出一个整数的每一位。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0, arr[10] = { 0 },i=0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	while (num != 0)
		{
			arr[i++] = num % 10;
			num = num / 10;
		}
	printf("该整数从高位到低位依次为：");
		for(i = i-1; i >= 0;i--)
	{
			printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}


4.编程实现： 
两个int（32位）整数m和n的二进制表达中， 
有多少个位(bit)不同？ 
输入例子: 
1999 2299 
输出例子:7 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void to2(int k, int arr[])
{
	int i = 0;
	while (k != 0)
	{
		if (k % 2 == 1)
		{
			k = k / 2;
			arr[i++] = 1;
		}
		else
		{
			k = k / 2;
			arr[i++]= 0;
		}
	}
}

int main()
{
	int arr1[32] = { 0 };
	int arr2[32] = { 0 };
	int m,n, j = 0,count=0;
	printf("请输入两个整数：");
	scanf("%d %d", &m,&n);
	to2(m, arr1);
	to2(n, arr2);
	for (j = 31; j >= 0; j--)
	{
		if (arr1[j] == arr2[j])
			;
		else
			count++;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}


5.写博客总结C语言操作符，博客链接发给我，并分享到群里。 
https://blog.csdn.net/HU1656/article/details/89071604
