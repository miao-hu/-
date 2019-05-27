2.练习动态内存开辟
malloc
calloc
realloc
free
函数


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//malloc:
#if 0
int main()
{
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)malloc(sizeof(int)*num);
	if (p != NULL)
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			p[i] = i;
		}
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
#endif


//calloc:
#if 0
int main()
{
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)calloc(num,sizeof(int));
	if (p != NULL)
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			p[i] = i;
		}
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
#endif


//realloc：
int main()
{
	int *ptr = malloc(100);
	if (ptr != NULL)
	{
		;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	int *p = realloc(ptr, 1000);
	if (p != NULL)
	{
		ptr = p;
	}
	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}

