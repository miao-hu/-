#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
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
#endif


void Function(int num)
{
	int i;
	printf("偶数位:");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数位:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
}
int main()
{
	int num;
	printf("请输入一个数：");
	scanf("%d", &num);
	Function(num);
	system("pause");
	return 0;
}

