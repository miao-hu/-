1..完成猜数字游戏。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("***************************\n");
	printf("*******  1.继续玩  ********\n");
	printf("*******  2.不玩了  ********\n");
	printf("***************************\n");
}

void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;      //产生一个0-100的数
	
	while (1)
	{
		printf("请猜一个数字:>");
		scanf("%d", &guess);
		if (ret > guess)
			printf("猜小了\n");
		else if (ret < guess)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}
}

int main()
{
	
	int input=0;
	int guess=0;
	
	do
	{
		menu();
		printf("请选择1或2:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				{
					game();
					break;
				}
			case 2:
				{
					 printf("退出游戏\n");
					break; 
				}
			default:
				{
					printf("请重新输入\n");
					break;
				}
		}

	} while (input);
	system("pause");
	return 0;
}


2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找）

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int find =16;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < find)
			left = mid + 1;
		else if (arr[mid]>find)
			right = mid - 1;
		else
			{
				printf("找到了,下标为%d\n", mid);
				break;
			}
	}
	if (left > right)
		printf("没有找到\n");
	system("pause");
	return 0;
}

3.编写代码模拟三次密码输入的场景。
  最多能输入三次密码，密码正确，提示“登录成功”,密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define mima  456123
int main()
{
	int i = 0;
	int key = 0;
	printf("请输入密码:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &key);
		if (key == mima)
			printf("登陆成功\n");
		else if (i < 2)
			printf("请重新输入\n");
		else  if (key!=mima)
			printf("请退出程序\n");
	}
	system("pause");
	return 0;
}

4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请输入一个字符:\n");
	char ch = getchar();
		if (ch >= 'A'&&ch <= 'Z')
			printf("该字符的小写字符为：%c\n", 'A' + 32);
		else if (ch >= 'a'&&ch <= 'z')
			printf("该字符的大写字符为：%c\n", 'a' - 32);
		else if (ch >= '0'&&ch <= '9')
			printf(" \n");
	
	system("pause");
	return 0;
}
