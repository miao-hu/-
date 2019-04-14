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

4. 
有一个字符数组的内容为:"student a am i", 
请你将数组的内容改为"i am a student". 
要求： 
不能使用库函数。 
只能开辟有限个空间（空间个数和字符串的长度无关）。 

student a am i 
i ma a tneduts 
i am a student 
