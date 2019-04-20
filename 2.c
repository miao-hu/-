#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 100
void main()
{
	int n, i, temp;
	int count = 0;
	int sworktime, fworktime;
	printf("请输入会议室开始工作时间：");
	scanf("%d", &sworktime);
	printf("请输入会议室结束工作时间：");
	scanf("%d", &fworktime);
	int fmintime = fworktime;
	printf("请输入需要安排多少项活动：");
	scanf("%d", &n);
	int k = n;
	int s[N], f[N];
	for (i = 0; i<n; i++)
	{
		printf("第%d个活动的开始时间为:", i + 1);
		scanf("%d", &s[i]);
		printf("结束时间为:");
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
			printf("安排的活动号为：");
			printf("%d\n", temp + 1);
		}
		else
			break;
	}
	printf("总共有%d个活动被安排", count);
	system("pause");
}
