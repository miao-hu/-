#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int arr[32] = { 0 };
	int a,i=0,j=0;
	printf("������һ������");
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
	printf("����λΪ��");
	for (i=i-1; i >= 0; i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("ż��λΪ��");
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
	printf("ż��λ:");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("����λ:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
}
int main()
{
	int num;
	printf("������һ������");
	scanf("%d", &num);
	Function(num);
	system("pause");
	return 0;
}

