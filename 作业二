1. 给定两个整形变量的值，将两个值的内容进行交换。 

  #define _CRT_SECURE_NO_WARNINGS 1
  #include<stdio.h>

  int main()
  {
    int a=5, b=8;
    int t;

      t = a;
      a = b;
      b = t;

    printf("%d %d\n", a, b);
    system("pause");
    return 0;

  }


2. 不允许创建临时变量，交换两个数的内容（附加题） 
  #include <stdio.h>
  int main()
  {
    int a[3] = { 1, 2 };
    a[3]=a[0];
    a[0] = a[1];
    a[1] = a[3];
    printf("%d,%d\n",a[0], a[1]);
    system("pause");
  }

3.求10 个整数中最大值。
  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,max;
    max = a[0];
    for (i = 1; i < 10; i++)
    {
      if (a[i]>max)
        max = a[i];
    }
    printf("%d\n", max);
    system("pause");
    return 0;

  }
	

4.将三个数按从大到小输出。
  #define _CRT_SECURE_NO_WARNINGS 1
  #include<stdio.h> 
  int main()
  {   int a,b,c,t;	
    printf("请输入三个数：\n");
    scanf("%d%d%d",&a,&b,&c);  
    if(a<b) 
    {	 t=a;	 a=b;	 b=t; } 
    if(a<c) 
    {	 t=a;	 a=c;	 c=t; } 
    if(b<c) 
    {	 t=b;	 b=c;	 c=t; } 
    printf("%d %d %d\n",a,b,c);
    system("pause");
  } 



5.求两个数的最大公约数。
  #define _CRT_SECURE_NO_WARNINGS 1
  #include<stdio.h>
  int main()
  {
    int a, b, t, i,max=0;
    printf("请输入两个数：");
      scanf("%d %d", &a, &b);
    if (a < b)
    {
      t = a;
      a = b;
      b = t;
    }
    if (b%a == 0)
      printf("最大公约数是%d\n",a);
    else  for (i = 1; i <= a; i++)
    {
      if (a%i == 0 && b%i == 0)
        max = i;

    }
    printf("最大公约数是%d\n",max);
    system("pause");
    return 0;
  }
