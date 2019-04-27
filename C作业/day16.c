1.实现strcpy 

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


2.实现strcat 

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


3.实现strstr 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。
如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL
*/
int my_strstr(char *arr1, char * arr2, int  len1, int len2)
{
	unsigned int i, j,ret;
	int tag = 0;
	//strlen返回一个无符号整型，也就是unsigned型，
	//比较时应该两边的数据类型相同，故严格上来说
	//应该将m定义为unsigned型
	for (i = 0; i < strlen(arr1); i++)
	{
		for (j = 0; j < strlen(arr2); j++)
		{
			if (*(arr1 + i) == *(arr2 + j))
			{
				tag++;
				break;
			}
		}
	}
	if (tag == strlen(arr2))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return ret;
}
int main()
{
	char arr1[20] = "Hellobit";
	char arr2[4] = "bit";
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	int ret=my_strstr(arr1, arr2, len1, len2);
	if (ret == 0)
	{
		printf("arr2不是arr1的字串\n");
	}
	else
		printf("arr2是arr1的字串\n");
	system("pause");
	return 0;
}


4.实现strchr 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
char *strchr(const char* _Str,char _Val)
char *strchr(char* _Str,char _Ch)
功能：查找字符串_Str中首次出现字符_Val的位置
说明：返回首次出现_Val的位置的指针
	  返回的地址是被查找字符串指针开始的第一个与Val相同字符的指针
	  如果Str中不存在Val则返回NULL。
返回值：成功则返回要查找字符第一次出现的位置，失败返回NULL
*/
int my_strchr(const char* arr, char key, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return 0;
}
int main()
{
	char arr[9] = "Hellobit";
	char key = 'b';
	int len= sizeof(arr) / sizeof(arr[0]);
	int ret=my_strchr(arr, key, len);
	if (ret)
	{
		printf("key第一次出现的位置下标是:%d\n", ret);
	}
	else
		printf("key在此字符串中没有出现\n");
	system("pause");
	return 0;
}


5.实现strcmp 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
/*
原型:extern int strcmp(const char *s1,const char *s2);
当s1<s2时，返回为负数；
当s1==s2时，返回值= 0；
当s1>s2时，返回正数。
即：两个字符串自左向右逐个字符相比（按ASCII值大小相比较）
	直到出现不同的字符或遇'\0'为止。如：
*/
int my_strcmp(char *arr1, char* arr2, int len)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	int i; 
	for (i = 0; i < len; i++)
	{
		if (*(arr1 + i)> *(arr2 + i))
		{
			return 1;
		}
		else if (*(arr1 + i) < *(arr2 + i))
			return -1;
		else if (*(arr1 + i) == *(arr2 + i))
		{
			;
		}
	}
	return 0;
}
int main()
{
	char *arr1= "Hellobit";
	char *arr2= "Hellobit";
	int len = strlen(arr1);
	int ret = my_strcmp(arr1, arr2, len);
	if (ret==0)
	{
		printf("两个字符串相同\n");
	}
	else if (ret==-1)
		printf("arr1字符串小于arr2字符串\n");
	else if (ret == 1)
	{
		printf("arr1字符串大于arr2字符串\n");
	}
	system("pause");
	return 0;
}


6.实现memcpy

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
/*
memcpy指的是c和c++使用的内存拷贝函数
功能是从源内存地址的起始位置开始拷贝若干个字节到目标内存地址中
原型:void *memcpy(void *dest, const void *src, size_t n);
功能:从源src所指的内存地址的起始位置开始拷贝
	 n个字节到目标dest所指的内存地址的起始位置中
如果目标数组destin本身已有数据，
执行memcpy()后，将覆盖原有数据（最多覆盖n）
*/
void my_memcpy(char *arr1, const char *arr2, int n)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	int i = 0; 
	for (i = 0; i < n; i++)
	{
		arr1[i] = arr2[i];
	}
	printf("%s\n", arr1);
}
int main()
{
	char arr1[9] = "Hellobit";
	//注意：要修改arr1必须设为数组，因为指针是只读的。不能修改
	char *arr2 = "student";
	int len = strlen(arr2);
	my_memcpy(arr1, arr2, 5);
	system("pause");
	return 0;
}


7.实现memmove 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
/*
原型：void *memmove( void* dest, const void* src, size_t count );
功能：由src所指内存区域复制count个字节到dest所指内存区域。
	memmove用于拷贝字节，如果目标区域和源区域有重叠的话，
	memmove能够保证源串在被覆盖之前将重叠区域的字节拷贝到目标区域中，
	但复制后源内容会被更改。
	但是当目标区域与源区域没有重叠则和memcpy函数功能相同。
*/
//第一种
void my_memmove(char *dest, const char *src, int n)
{
	assert(dest != NULL);
	assert(src != NULL);
	if (src < dest&&dest<src+n)//有重叠现象
	{
		while (n--)
		{
			*(dest + n) = *(src + n);
		}
	}
	else   //无重叠现象
	{
		while (n--)
		{
			*(dest++) = *(src++);
		}
	}
}
int main()
{
	char arr[9] = "12345678";
	//注意：要修改arr必须设为数组，因为指针是只读的。不能修改
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr+5, arr+3, 3); //有重叠现象
	for (i = 0; i < len; i++)
		printf("%c ", arr[i]);
	system("pause");
	return 0;
}

//第二种
//void my_memmove(int *p1, int const *p2, size_t count)
//{
//		assert(p1);
//		assert(p2);	
//		char *dest = (char *)p1;  //int *强转为char *	
//		char *src = (char *)p2;	
//		if ((dest > src) && (dest < src + count))  //内存重叠时的情况
//		{	
//			while(count--)		
//			{		
//				*(dest + count) = *(src + count); 	
//			}	
//		}	
//		else       //判断不重叠时的情况	
//		{		
//			while(count--)		
//			{			
//				*dest++ = *src++;		
//			}	
//		}
//}
//int main()
//{	
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};	
//	int i = 0;
//	my_memmove(arr+4,arr+2,16);	    //16个字节，4个元素
//	for(i=0;i<10;i++)	
//	{		
//		printf("%d ",arr[i]);	
//	}	
//	printf("\n");
//	system("pause");
//	return 0;
//}
//		
