1.在屏幕上输出以下图案： 

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


3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
例如：2+22+222+2222+22222 

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



