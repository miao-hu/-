2.练习动态内存开辟
malloc
calloc
realloc
free
函数


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//malloc:
#if 0
int main()
{
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)malloc(sizeof(int)*num);
	if (p != NULL)      //申请成功
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			p[i] = i;
		}
	}
	else    //申请不成功
	{
		printf("%d : %s\n", errno, strerror(errno));
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
	else    //申请不成功
	{
		printf("%d : %s\n", errno, strerror(errno));
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
#endif



//realloc：
//第一种
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
	else    //申请不成功
	{
		printf("%d : %s\n", errno, strerror(errno));
	}
	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}



//第二种
int main()
{
	char *p = malloc(sizeof(char)* 100);
	if (!p)
	{
		printf("malloc error\n");
		return 1;
	}
	memset(p, 'A', sizeof(char)* 100);
	char *q = realloc(p, sizeof(char)* 50);  //内存变小，指针和原来一样
	//char *q = realloc(p, sizeof(char)* 1000);  //内存变大
	//释放原空间，重新开始一大块内存，指针发生变化
	if (!q)
	{
		printf("realloc error\n");
		return 0;
	}
	printf("%p,%p\n",p, q);
	int i = 0;
	for (; i < 50; i++)
	{
		printf("%c ", p[i]);
	}
	free(q);
	system("pause");
	return 0;
}


