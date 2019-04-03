1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 }, b[5] = { 6, 7, 8, 9, 10 }, t[5] = {};
	int i,j; 
	for (i = 0; i < 5; i++)
	{
		t[i] = a[i];
		a[i] = b[i];
		b[i] = t[i];
	}
	printf("a数组的元素\n");
	for (j = 0; j < 5; j++)
	{
		
		printf("%d   ", a[j]);
	}
	printf("\n");
	printf("b数组的元素\n");
	for (j = 0; j < 5; j++)
	{
		
		printf("%d   ", b[j]);
	}

	
	system("pause");
	return 0;

}

2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float sum = 0,t=1;
	for (i = 1; i <= 100; i++)
	{
		sum += t/ i;
		t = -t;

	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}

3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a=0,b=0,count=0;
	for (i = 1; i <= 100; i++)
	{
		a = i / 10;
		b = i % 10;
		if (a == 9 )
			count++;
		if( b == 9)
			count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
