1.在屏幕上输出以下图案： 

//第一种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch = '*';
	printf("       %c\n",ch);
	printf("      %c%c%c\n",ch,ch,ch);
	printf("     %c%c%c%c%c\n",ch,ch,ch,ch,ch);
	printf("    %c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch);
	printf("   %c%c%c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch,ch,ch);
	printf("  %c%c%c%c%c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch);
	printf("   %c%c%c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch,ch,ch);
	printf("    %c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch);
	printf("     %c%c%c%c%c\n",ch,ch,ch,ch,ch);
	printf("      %c%c%c\n",ch,ch,ch);
	printf("       %c\n",ch);
	

	system("pause");
	return 0;
}


//第二种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	scanf("%d", &line);    //7
	int i = 0;
	//上半部分
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

2.求出0～999之间的所有“水仙花数”并输出。 
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。 

/* 
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。 
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数： 
153 = 1^3 + 5^3 + 3^3。 
370 = 3^3 + 7^3 + 0^3。 
371 = 3^3 + 7^3 + 1^3。 
407 = 4^3 + 0^3 + 7^3。 
*/ 

//第一种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num1=0,num2=0,num3=0;
	printf("Λ®ΟΙ»¨ΚύΣΠ:\n");
	for (i = 0; i <= 999; i++)
	{
		num1 = i / 100;
		num2 = i % 100 / 10;
		num3 = i % 10;
		if (i == num1*num1*num1 + num2*num2*num2 + num3*num3*num3)
			printf("%d\n", i);
	}
    system("pause");
	return 0;
}

//第二种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1、拿到当前数字是几位数？ 
//2、求各个位上的数字
//3、求它的立方和，count次方.
int main()
{
	printf("这些数是水仙花数:\n");
	int i = 0;
	for (i = 0; i <= 999999; i++)  //查找范围
	{

		int count = 0;           //这三条语句必须在循环内，因为每个数字都要从0开始计位和求和
		int sum = 0;             //若放在循环外部，一个数字下来那么他的sum就不是0，count和sum都已经有值了
		int temp = 0;
		temp = i;                 //建立临时变量是因为怕改变i的值
		while(temp != 0)          //计算位数count
		{
			count++;
			temp /= 10;
		}
		temp = i;
		while (temp != 0)
		{
			sum += pow((double)(temp % 10), count);        //末尾数字的count次方的和
			temp /= 10;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}


3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
例如：2+22+222+2222+22222 

//第一种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a=0,b=0,c=0,d=0,sum=0;
	printf("请输入一个各个位都相同的五位数\n");
	scanf("%d", &i);
	a = i % 10;
	b = i % 100;
	c = i % 1000;
	d = i % 10000;
	sum = a + b + c + d + i;
	printf("\n");
	printf("最终结果为%d\n", sum);
	system("pause");
	return 0;
}


//第二种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int cishu = 0;  //循环次数
	int a = 0;      //一位数字
	int sum = 0;
	int tmp = 0;
	int i = 0;
	scanf("%d %d", &cishu, &a);
	for (i = 0; i < cishu; i++)
	{
		tmp = tmp*10+ a;
		sum += tmp;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

