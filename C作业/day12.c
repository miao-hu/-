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

void Printf(int arr[])
{
	int i;
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
}
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
	Printf(arr);
	printf("\n");
	int ret=InvertArr(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}	
2.不使用（a+b）/2这种方式，求两个数的平均值。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

float average(float a, float b)
{
	return a+(b-a)/2;
}
int main()
{
	float a, b;
	printf("请输入两个数:");
	scanf("%f %f", &a, &b);
	float ret = average(a, b);
	printf("ret=%f\n", ret);
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
int main()
{
	int arr[] = {  5, 2, 7, 3, 3, 5, 2 };
	int result = arr[0] ^ arr[1] ^ arr[2] ^ arr[3] ^ arr[4] ^arr[5] ^ arr[6] ;
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
void Invertarray(char *p)
{
	int len = strlen(p);
	int temp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = '\0';
	if (strlen(p + 1) > 1)
	{
		Invertarray(p+1);
	}
	*(p + len - 1) = temp;
}
int main()
{
	char s[] = "student a am i";
	char temp;
	printf("%s\n", s);
	Invertarray(s);
	Invertarray(s+7);
	temp = s[2];
	s[2] = s[3];
	s[3] = temp;
	printf("%s\n", s);
	system("pause");
	return 0;
}
