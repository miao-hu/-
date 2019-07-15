#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _CONTACT_H_
#define _CONTACT_H_

#define MAX 1000    //通讯录人数1000人
#define NAME_MAX 20   //名字的最大长度20
#define SEX_MAX 10
#define TELE_MAX 12
#define ADDR_MAX 20

enum Option
{
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT,
	SAVE,
	EXIT,
};

typedef struct PeoInfo   //每个人的信息
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact    //通讯录
{
	PeoInfo data[MAX];   //存放1000个人的信息的通讯录
	int sz;           //记录通讯录的当前有效人数
}Contact,*pContact;   //结构体指针

void menu();   //菜单显示
void test();
void InitContact(pContact pc);   //初始化通讯录
void AddContact(pContact pc);    //添加联系人信息 
void ShowContact(pContact pc);    //显示所有联系人信息 
void DelContact(pContact pc);   //删除指定联系人信息
int  SearchContact(pContact pc);    // 查找指定联系人信息 
void SortContact(pContact pc);    // 以名字排序所有联系人
void ModdifyContact(pContact pc);   //修改指定联系人信息
void ClearContact(pContact pc);    //清空所有联系人


#endif

