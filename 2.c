#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 100
void main()
{
	int n, i, temp;
	int count = 0;
	int sworktime, fworktime;
	printf("����������ҿ�ʼ����ʱ�䣺");
	scanf("%d", &sworktime);
	printf("����������ҽ�������ʱ�䣺");
	scanf("%d", &fworktime);
	int fmintime = fworktime;
	printf("��������Ҫ���Ŷ�������");
	scanf("%d", &n);
	int k = n;
	int s[N], f[N];
	for (i = 0; i<n; i++)
	{
		printf("��%d����Ŀ�ʼʱ��Ϊ:", i + 1);
		scanf("%d", &s[i]);
		printf("����ʱ��Ϊ:");
		scanf("%d", &f[i]);
	}
	while (k != 0)
	{
		fmintime = 20;
		for (i = 0; i<n; i++)
		{
			if (f[i]<fmintime&&s[i] >= sworktime)
			{
				fmintime = f[i];
				temp = i;
			}
		}
		if (fmintime<20)
		{
			sworktime = f[temp];
			f[temp] = 20;
			k--;
			count++;
			printf("���ŵĻ��Ϊ��");
			printf("%d\n", temp + 1);
		}
		else
			break;
	}
	printf("�ܹ���%d���������", count);
	system("pause");
}
