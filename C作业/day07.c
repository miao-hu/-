1.递归和非递归分别实现求第n个斐波那契数。

#pragma warning(disable:4996)     
#include<stdio.h>
#include<stdlib.h>
//这个题中，迭代法显然比较快，可以输入n=50来进行比较，因为递归法重复调用函数了很多次

//递归法
int count = 0;       //count为全局变量
int fib(int n)
{
	if (n == 3)         //计算fib(3)被调用了几次
		count++;
	if (n > 2)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}
int main()
{
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	int ret = fib(n);
	printf("result=%d,count=%d", ret,count);
	system("pause");
	return 0;
}


//迭代法
#if 0
int fib(int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	int i = 2;
	while (i<n)
	{
		third = first + second;
		first=second;
		second=third;
		i++;
	}
	return third;
}
int main()
{
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	int ret = fib(n);
	printf("result=%d\n", ret);
	system("pause");
	return 0;
}
#endif

2.编写一个函数实现n^k，使用递归实现

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//此题有一个警告：不是所有的控件路径都返回值   这个函数可能涵盖的值不全面
long POW(unsigned int n, unsigned int k)
{
	if (n == 0 )
		return 0;
	if (n == 1)
		return 1;
	if (n != 1 && k == 0)
		return  1;
	if (n!=1&&k!=0)
		return  n*POW(n, k - 1);
}

int main()
{
	unsigned int n = 0, k = 0;
	printf("请输入两个数:");
	scanf("%d %d", &n, &k);
	long ret=POW(n, k);
	printf("%ld\n", ret);
	system("pause");
	return 0;
}

3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void DigitSum(unsigned int n,unsigned int *sum)
{
	if (n > 9)
		 DigitSum(n / 10,sum);

		(*sum)+=n % 10;

}
int main()
{
	unsigned long n,sum=0;
	printf("请输入一个数:");
	scanf("%d", &n);
	DigitSum(n,&sum);
	printf("%d", sum);
	system("pause");
	return 0;
}

4. 编写一个函数reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中
的字符串操作函数。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char *arr)
{
	char arr1[6] = { 0 };
	int i = 0,j=4;
	for (i = 0,j=4; j>=0; i++,j--)
	{
		arr1[i] = arr[j];
	}
	for (i = 0; i <6; i++)
	{
		arr[i] = arr1[i];
	}
	
}
int main()
{
	char arr[6] = { 'a','b','c','d','e','\0' };          //'\0'也要占一个空间
	printf("before: %s\n", arr);
	reverse_string(arr);
	printf("after: %s\n", arr);
	system("pause");
	return 0;
}

5.递归和非递归分别实现strlen

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

//第一种方法(不允许创建临时变量）递归法
#if 0
int strlen(const char *str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen(str + 1);
}
int main()
{
	char *str = "abcdefg";
	int len = strlen(str);
	printf("%d\n", len);
	system("pause");
	return 0;
}
#endif


//第二种方法（允许创建临时变量）迭代法
#if 0
int strlen(const char *str,int count)
{
	assert(str);         //检测字符串是否成立，
	while (*str != '\0')
	{
		count++;
		str++;            //注意：指针必须移动。这句话不能少！第一次编写忘记了
	}
	return count;
}
int main()
{
	int count = 0;
	char *str = "abcde";
	int len = strlen(str, count);
	printf("%d\n", len);
	system("pause");
	return 0;
}
#endif

//第三种（允许创建零时变量）
int str(const char *str)
{
	int count = 0;
	assert(str);                //检测字符串是否成立，
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "abcd46631";
	int len = strlen(str);
	printf("%d\n", len);
	system("pause");
	return 0;
}


6.递归和非递归分别实现求n的阶乘

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//迭代法(循环)
#if 0
int fac(int n)
{
	int sum = 1;
	while (n > 1)
	{
		sum *= n;
		n -= 1;
	}
	return sum;
}
int main()
{
	int n;
	printf("请输入n：");
	scanf("%d", &n);
	int ret=fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif

//递归法
int fac(int n)
{
	if (n == 1)
		return 1;
	else 
		return n*fac(n - 1);
}
int main()
{
	int n;
	printf("请输入n：");
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

7.递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Print(int num)
{
	if (num > 9)
	{
		Print(num / 10);
	}
	printf("%d ", num % 10);
}
int main()
{
	int num = 0;
	printf("请输入一个数字:");
	scanf("%d", &num);
	Print(num);

	system("pause");
	return 0;
}
 
