#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��һ��
#if 0
int main()
{
	int count = 0;
	int i;
	printf("������һ����:");
	scanf("%d", &i);
	while (i != 0)
	{
		if (i % 2 == 1)
		{
			count++;
			i = i / 2;
		}
		else  i = i / 2;        //i=i>>1;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
#endif 


//�ڶ���
#if 0
int  count_one_bits(unsigned int n)     //unsigened���޶�����
{
	int count = 0;
	while (n != 0)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n;
	printf("������һ����:");
	scanf("%d", &n);
	int count = count_one_bits(n);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
#endif


//������
int  count_one_bits(unsigned int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	return count;
}
int main()
{
	int n;
	printf("������һ����:");
	scanf("%d", &n);
	int count = count_one_bits(n);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}