1.实现一个函数，可以左旋字符串中的k个字符。 
ABCD左旋一个字符得到BCDA 
ABCD左旋两个字符得到CDAB 


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void LeftMove(char *str)
{
	int k,i;
	printf("请输入左旋次数:");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		char temp=*str;
		int j = 0;
		while (*(str+ 1 + j))
		{
			*(str+j) = *(str + 1 + j);
			j++;
		}
		*(str + j) = temp;
	}
}
int main()
{
	char str[] = "ABCD";
	printf("%s\n", str);
	LeftMove(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}


2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
例如：给定s1 =AABCD和s2 = BCDAA，返回1 
给定s1=abcd和s2=ACBD，返回0. 

AABCD左旋一个字符得到ABCDA 
AABCD左旋两个字符得到BCDAA 

AABCD右旋一个字符得到DAABC 


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int LeftMove(char *str1,char *str2,int len)
{
	int i;
	for (i = 0; i < len; i++)    //循环次数为这个字符串的长度
	{
		char temp = *str1;    //保存第一个值
		int j = 0;
		while (*(str1 + 1 + j))   //遍历整个字符串直到遇到'\0'
		{
			*(str1+ j) = *(str1 + 1 + j);    //把后一个数附给前一个数
			j++;
		}
		*(str1 + j) = temp;
		if (0== strcmp(str1, str2))      //两个字符串内容匹配返回0
			return 1;
	}
	return 0;
}
int RightMove(char *str1, char *str2, int len)
{
	int i = 0;
	char *start= str1;        //字符串起始位置
	char *end = str1 + len - 1;   //字符串末尾位置
	for (i = 0; i < len; i++)
	{
		char temp = *str1;
		while (end != start)
		{
			*start = *(start + 1);
			start++;
		}
		*end = temp;
		if (0== strcmp(str1, str2))
			return 1;
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "ABCDA";
	int len = strlen(str1);
	int ret = LeftMove(str1, str2,len)||RightMove(str1, str2, len);
	printf("ret=%d\n", ret);    
	//返回1代表此字符串是否为另外一个字符串旋转（左旋或右旋）之后的字符串
	system("pause");
	return 0;
}
