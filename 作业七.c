1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void ShowMutil(int num)
{
	int i, j;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%3d*%d=%3d", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int num;
	printf("请输入一个数:");
	scanf("%d", &num);
	printf("乘法口诀表为：\n");
	ShowMutil(num);
	system("pause");
	return 0;
}


2.使用函数实现两个数的交换。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int m, n;
	printf("请输入两个数:");
	scanf("%d %d", &m, &n);
	printf("m=%d,n=%d\n", m, n);
	swap(&m, &n);
	printf("m=%d,n=%d\n", m, n);
	system("pause");
	return 0;
}


3.实现一个函数判断year是不是润年。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int is_LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 != 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year;
	printf("请输入一个年份:");
	scanf("%d", &year);
	int ret = is_LeapYear(year);
	if (ret == 1)
		printf("是闰年\n");
	else
		printf("不是闰年\n");
	system("pause");
	return 0;
}


4.创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void init(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
}
void empty(int arr[])
{
	int j = 0;
	for (j = 0; j< 10; j++)
	{
		arr[j] =0;
	}
}
void reverse(int arr[])
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = arr[9 - i];
	}
	for (i = 0; i < 10; i++)
	{
		arr[i] = a[i];
	}
}
int main()
{
	int arr[10],i;
	printf("初始化数组:\n");
	init(arr);
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("数组的逆置:\n");
	reverse(arr);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("清空数组:\n");
	empty(arr);
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

5.实现一个函数，判断一个数是不是素数。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int is_prime(int i)
{
	int j;
	for (j = 2; j <= i / 2; j++)
	{
		if (i%j == 0)
		{
			return -1;
			break;
		}
	}
	return 1;
}

int main()
{
	int i;
	printf("请输入一个数:");
	scanf("%d", &i);
	int ret=is_prime(i);
	if (ret == 1)
		printf("是素数\n");
	else
		printf("不是素数\n");
	system("pause");
	return 0;
}
