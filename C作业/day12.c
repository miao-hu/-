1.编写函数： 
unsigned int reverse_bit(unsigned int value); 
这个函数的返回值是value的二进制位模式从左到右翻转后的值。 

如： 
在32位机器上25这个值包含下列各位： 
00000000000000000000000000011001 
翻转后：（2550136832） 
10011000000000000000000000000000 
程序结果返回： 
2550136832 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#if 0
int InvertArr(int *arr)
{
	int arr1[32] = { 0 };
	int i,sum=0;
	for (i = 0; i < 32; i++)
	{
		arr1[i] = arr[31 - i];
	}
	for (i = 0; i < 32; i++)
	{
		arr[i] = arr1[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (arr[i] == 1)
			sum += (int)(pow(2, (31- i)));
	}
	return sum;
}

/*
void Printf(int arr[])                //打印这个数组中的内容
{
	int i;
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
}
*/

int main()
{
	unsigned int a;
	int arr[32] = { 0 };
	int count = 0,i=31;
	printf("Please enter number:");
	scanf("%d", &a);
	while (a)
	{
		arr[i--]=a % 2;
		a /= 2;
	}
	//Printf(arr);
	unsigned int ret=InvertArr(arr);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
#endif


//第二种
unsigned int  InvertArr(unsigned int num)
{
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		sum+=((num>> i) & 1) * pow(2, 31 - i);
	}
	return sum;
}
int main()
{
	unsigned int num;
	printf("Please enter number:");
	scanf("%d", &num);
	unsigned int ret = InvertArr(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}


2.不使用（a+b）/2这种方式，求两个数的平均值。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//第一种
#if 0
float Average1(float a, float b)
{
	return a+(b-a)/2;
}
int main()
{
	float a, b;
	printf("请输入两个数:");
	scanf("%f %f", &a, &b);
	float ret = Average1(a, b);
	printf("ret=%f\n", ret);
	system("pause");
	return 0;
}
#endif

//第二种
/*
a和b相同的部分：&运算
a和b不同的部分：^运算
相同的部分乘以2，加上不同的部分为两者的和
除以2 相当于>>1
*/

int Average2(int a, int b)
{                                  //   +的优先级大于>>
	return (a&b) + ((a^b) >> 1);   // 注意操作符的优先级(a^b) >> 1必须带括号
	//return (a&b) + (a^b) / 2;
}
int main()
{
	int a, b;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	int average= Average2(a, b);
	printf("average=%d\n", average);
	system("pause");
	return 0;
}




3.编程实现： 
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
请找出这个数字。（使用位运算） 


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//一个数异或0为它本身，一个数异或它本身为0        异或相同为0，不同为1

//(1)
#if 0
int main()
{
	int arr[] = {  5, 2, 7, 3, 3, 5, 2 };
	int result = arr[0] ^ arr[1] ^ arr[2] ^ arr[3] ^ arr[4] ^arr[5] ^ arr[6] ;
	printf("This single number is %d\n", result);
	system("pause");
	return 0;
}
#endif

//(2)
int Fun(int *arr, int len)
{
	int i, temp = 0;
	for (i = 0; i < len; i++)
	{
		temp ^= arr[i];
	}
	return temp;
}
int main()
{
	int arr[] = { 5, 2, 7, 3, 3, 5, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int result = Fun(arr, len);
	printf("This single number is %d\n", result);
	system("pause");
	return 0;
}


4. 
有一个字符数组的内容为:"student a am i", 
请你将数组的内容改为"i am a student". 
要求： 
不能使用库函数。 
只能开辟有限个空间（空间个数和字符串的长度无关）。 

student a am i 
i ma a tneduts 
i am a student 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Reverse(char *left,char *right)  //逆置字符串left-->right
{
	char temp;
	while(left<=right)
	{
	temp=*left;
	*left=*right;
	*right=temp;
	left++;
	right--;
	}
}
int MyStrlen(char *str)    //求字符串长度
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}
void ReverseSentence(char *str)
{
	//1.先逆置整个字符串
	char *left = str;
	char *right = str + MyStrlen(str) - 1;
	char *p = str;
	Reverse(left,right); 
	//2.再逆置每个单词
	while (*p != '\0')
	{
		char *start = p;
		while (*p != ' '&&*p != '\0')
		{
			p++;
		}
		Reverse(start, p - 1);
		if (*p == ' ')
		{
			p++;
		}
	}
}
int main()
{
	char str[] = "student a am i";
	ReverseSentence(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
