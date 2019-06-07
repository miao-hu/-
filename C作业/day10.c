1. 
写一个函数返回参数二进制中 1 的个数 
比如： 15 0000 1111 4 个 1 
程序原型： 
int count_one_bits(unsigned int value) 
{ 
// 返回 1的位数 
} 


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//第一种
#if 0
int  count_one_bits1(unsigned int num)     //unsigened有无都可以
{
	int count = 0;
	while (num != 0)
	{
		if (num% 2 == 1)
		{
			count++;
		}
		num= num / 2;        //或者i=i>>1;
	}
	return count;
}
int main()
{
	int num;
	printf("请输入一个数:");
	scanf("%d", &num);
	int count=count_one_bits1(num);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
#endif


//第二种
#if 0
int  count_one_bits2(unsigned int num)     //unsigened有无都可以
{
	int count = 0;
	while (num != 0)
	{
		num = num&(num- 1);    //有几个1就循环几次，效率高
		count++;
	}
	return count;
}
int main()
{
	int num;
	printf("请输入一个数:");
	scanf("%d", &num);
	int count = count_one_bits2(num);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
#endif


//第三种
int  count_one_bits3(unsigned int num)
{
	int count = 0;
	for (int i = 0; i < 31; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	return count;
}
int main()
{
	int num;
	printf("请输入一个数:");
	scanf("%d", &num);
	int count = count_one_bits3(num);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}



2.获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//第一种
#if 0
int main()
{
	int arr[32] = { 0 };
	int a,i=0,j=0;
	printf("请输入一个数：");
	scanf("%d", &a);
	while (a != 0)
	{
			if (a % 2 == 1)
			{
				a = a / 2;
				arr[i++] = 1;
			}
			else
			{
				a = a / 2;
				arr[i++] = 0;
			}
	
	}
	j = i;
	printf("奇数位为：");
	for (i=i-1; i >= 0; i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("偶数位为：");
	for (j = j - 2; j >= 0; j -= 2)
	{
		printf("%d ", arr[j]);
	}
	system("pause");
	return 0;
}
#endif

//第二种
void Function(int num)
{
	int i;
	printf("偶数位:");          //从右向左看
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数位:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num;
	printf("请输入一个数：");
	scanf("%d", &num);
	Function(num);
	system("pause");
	return 0;
}



3. 输出一个整数的每一位。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0, arr[10] = { 0 },i=0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	while (num != 0)
		{
			arr[i++] = num % 10;
			num = num / 10;
		}
	printf("该整数从高位到低位依次为：");
		for(i = i-1; i >= 0;i--)
	{
			printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}


4.编程实现： 
两个int（32位）整数m和n的二进制表达中， 
有多少个位(bit)不同？ 
输入例子: 
1999 2299 
输出例子:7 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//第一种
#if 0
int main()
{
	int num = 0, arr[10] = { 0 },i=0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	while (num != 0)
		{
			arr[i++] = num % 10;
			num = num / 10;
		}
	printf("该整数从高位到低位依次为：");
		for(i = i-1; i >= 0;i--)
	{
			printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
#endif


//第二种
#if 0
int CalcDiff(int m, int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		count+=((m^n) >> i) & 1;
	}
	return count;
}
int main()
{
	int m, n;
	printf("Please enter:");
	scanf("%d %d", &m, &n);
	printf("%d\n", CalcDiff(m, n));
	system("pause");
	return 0;
}
#endif

//第三种
int CalcDiff(int m, int n)
{
	int count = 0;
	int temp = m^n;      //求两个数不一样的位，要进行异或：相同为0不同为1
	while (temp != 0)       //统计1的个数,有几个1循环几次
	{
		temp = temp &(temp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m, n;
	printf("Please enter:");
	scanf("%d %d", &m, &n);
	printf("%d\n", CalcDiff(m, n));
	system("pause");
	return 0;
}


5.写博客总结C语言操作符，博客链接发给我，并分享到群里。 
https://blog.csdn.net/HU1656/article/details/89071604
