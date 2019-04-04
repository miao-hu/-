1.打印100~200之间的素数

#include<stdio.h>
int main()
{
    int i, j;
    for (i = 100; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j == 0)
                break;
        }
        if (j==i)
        printf("%d\n", i);
         }
    system("pause");
    return 0;
}
2.输出乘法口诀表

#include<stdio.h>
int main()
{
int i, j, k;
for (i = 1; i < 10;i++)
for (j = i; j < 10; j++)
{
k = ij;
printf("%d%d=%d\n", i, j, k);
}
system("pause");
return 0;
}

3.判断1000年---2000年之间的闰年

#include<stdio.h>
int main()
{
int i;
for (i = 1000; i <= 2000;i++)
if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
printf("%d\n", i);
system("pause");
return 0;
}
