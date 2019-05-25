#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include<stdio.h>
#include<string.h>

void menu()
{
	printf("******************************\n");
	printf("*** 1.ADD        2.DEL     ***\n");
	printf("*** 3.SEARCH     4.MODIFY  ***\n");
	printf("*** 5.SHOW       6.CLEAR   ***\n");
	printf("*** 7.SORT       0.EXIT    ***\n");
	printf("******************************\n");
}

void test()
{
	int input = 0;
	Contact con;   //定义1000个人的通讯录，名字为con
	InitContact(&con);    //初始化通讯录
	do
	{
		menu();
		printf("pease select:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);   //结构体的地址
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModdifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			ClearContact(&con);
		case 7:
			SortContact(&con);
		default:
			break;
		}
	} while (input);
}

void InitContact(pContact pc)  //初始化通讯录
{
	pc->sz = 0;     //通讯录当前有效人数为0
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(pContact pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录人已满，无法增加新的联系人\n");
		return;
	}
	printf("请输入名字:");
	scanf("%s", pc->data[pc->sz].name);    //下标从0开始
	printf("请输入年龄:");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;    //有效人数加1
}

void ShowContact(pContact pc)    //显示联系人信息
{
	int i = 0;
	printf("%10s\t%5s\t%5s\t%12s\t%12s\t\n", "name", "age", "sex", "tele", "addr");   //显示标题
	for (i = 0; i < pc->sz; i++)   //遍历通讯录
	{
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[i].name, \
			pc->data[i].age, pc->data[i].sex, \
			pc->data[i].tele, pc->data[i].addr);
	}
}

void DelContact(pContact pc)   //删除联系人
{
	char name[NAME_MAX] = { 0 };//存放要查找的人的名字
	int i = 0;
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入要删除人的名字:");   
	scanf("%s", name);  //%s   有无&都可以
	pos = Find(pc, name);    //找到要删除的人   pos代表第几个人
	if (i == pos)
	{
		printf("要删除的人不存在\n");
	}
	for (pos = i; pos < pc->sz; pos++)   //删除
	{
		pc->data[pos] = pc->data[pos + 1];   //覆盖
	}
	pc->sz--;   //有效人数减1
}

int Find(pContact pc, char name[])   //查找对应名字的位置
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name,name) == 0)
			return i;
	}
	return -1;   //没有找到这个人
}

int  SearchContact(pContact pc)  //查找指定联系人
{
	int pos = 0;
	char name[NAME_MAX] = { 0 };   //存放要查找的人的名字
	printf("请输入要查找的联系人的名字:");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("查找的联系人不存在\n");
		return -1;
	}
	else
	{
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[pos].name, \
			pc->data[pos].age, pc->data[pos].sex, \
			pc->data[pos].tele, pc->data[pos].addr);
		return pos;
	}
}

void SortContact(pContact pc)  //以名字排序所有联系人
{
	int i = 0, j = 0;
	for (i = 0; i < pc->sz; i++)   //冒泡排序
	{
		for (j = 0; j < pc->sz - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				PeoInfo temp = pc->data[j];
				pc->data[j] = pc->data[j+1];
				pc->data[j + 1] = temp;
			}
		}
	}
}

void ModdifyContact(pContact pc)  //修改联系人信息
{
	int ret = SearchContact(pc);
	if (ret != -1)   //通讯录有这个人
	{
		printf("请输入要修改联系人的信息:\n");
		printf("请输入修改的名字:");
		scanf("%s", pc->data[ret].name);
		printf("请输入修改的年龄:");
		scanf("%d", &pc->data[ret].age);
		printf("请输入修改的性别:");
		scanf("%s", pc->data[ret].sex);
		printf("请输入修改的电话:");
		scanf("%s", pc->data[ret].tele);
		printf("请输入修改的地址:");
		scanf("%s", pc->data[ret].addr);
	}
	else
	{
		printf("无法修改\n");   //没有这个人
	}
}

void ClearContact(pContact pc)   //清空所有联系人
{
	pc->sz = 0;   //通讯录有效人数设置为0
	printf("已经清空通讯录\n");
}


