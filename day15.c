1.一个数组中只有两个数字是出现一次， 
其他所有数字都出现了两次。 
找出这两个只出现一次的数字，编程实现。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Find_Num(int arr[], int len)
{
	int sum = 0;  //记录数组所有元素异或的值
	int i = 0;
	int pos = 0;   //记录两个不同的数异或结果中第一次出现1的位置
	int x = 0, y = 0;
	for (i = 0; i < len; i++)
	{
		sum ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (1 == ((sum >> i)&1))
		{
			pos = i;  //记录两个不同的数异或结果中第一次出现1的位置
			break;   //一定要有break;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (1 == ((arr[i] >> pos)&1))
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	printf("x=%d,y=%d\n", x, y);
}
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Find_Num(arr, len);
	system("pause");
	return 0;
}


2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()                          //总结:total = 2*money-1;
{
	int money = 0;
	int total = 0;
	int empty= 0;
	printf("请输入钱的数目:>");
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;
}


3.模拟实现strcpy 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
strcpy，即string copy（字符串复制）的缩写。
strcpy是一种C语言的标准库函数，strcpy把含有'\0'结束符的字符串复制到另一个地址空间
返回值的类型为char*
原型声明：char *strcpy(char* dest, const char *src);
功能：把从src地址开始且含有NULL结束符的字符串复制到以dest开始的地址空间
说明：src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
返回:指向dest的指针。
*/
void my_strcpy(char *arr1)

{
	char arr2[10] = "\0";
	for (int i = 0; *(arr1 + i) != '\0'; i++)
	{
		arr2[i] = *(arr1 + i);
	}
	printf("%s\n", arr2);
}
int main()
{
	char *arr1 = "abcdefg";
	my_strcpy(arr1);
	system("pause");
	return 0;
}


4.模拟实现strcat

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
原型:extern char *strcat(char *dest, const char *src);
功能:把src所指向的字符串（包括“\0”）复制到
dest所指向的字符串后面（删除*dest原来末尾的“\0”）。
注意:要保证*dest足够长，以容纳被复制进来的*src。*src中原有的字符不变。
返回指向dest的指针。
说明:src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
*/
void my_strcat(char *arr1, const char *arr2,int len1,int len2)
{
	int i = 0,j=0;
	i = strlen(arr1); //从arr1字符串'\0'位置开始赋值
	for (j = 0; j < strlen(arr2); j++)
	{
		*(arr1 + (i++)) = *(arr2+j);
	}
	printf("%s\n", arr1);
}
int main()
{
	char arr1[20] = "Hello";
	char arr2[6]= "  bit";
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	my_strcat(arr1,arr2,len1,len2);
	system("pause");
	return 0;
}
