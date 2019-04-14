1.  
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0, b=0, c=0, d=0, e=0;
	for (a = 1; a <= 5;a++)
	for (b = 1; b <= 5;b++)
	if (b!=a)
	for (c = 1; c <= 5;c++)
	if (c!=a&&c!=b)
	for (d = 1; d <= 5;d++)
	if (d!=a&&d!=b&&d!=c)
	for (e= 1; e<= 5; e++)
	{
		
		if (e!=a&&e!=b&&e!=c&&e!=d)
		if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && \
			((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && \
			((e == 4) +(a == 1) == 1)==1)
		printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
	}
	system("pause");
	return 0;
}


2.  
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	char x;
	for (x = 'a'; x <= 'd'; x++)
	{
		if ((x != 'a') + (x == 'c') + (x == 'd') + (x != 'd') == 3)
			printf( "%c is a thief\n",x);
	}
	system("pause");
	return 0;
}


3.在屏幕上打印杨辉三角。
1 
1 1 
1 2 1 
1 3 3 1 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void yanghuisanjiao(int a[], int n)
{
	int i;
	 if (n == 1)
		{
			a[0] = 1;
			a[1] = 1;
		}
	
	else {
			yanghuisanjiao(a, n - 1);
			a[n] = 1;
			for (i = n - 1; i >= 1; i--)
			{
				a[i] = a[i] + a[i - 1];
			}
			a[0] = 1;
		}
	for (i = 0; i <= n; i++)
		printf("%2d ", a[i]);
	printf("\n");
}

int main()
{
	int a[100] = { 0 };
	int n;
	printf("请输入一个数n：");
	scanf("%d", &n);
	printf("1\n");
	yanghuisanjiao(a, n);
	system("pause");
	return 0;
}
