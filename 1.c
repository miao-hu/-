#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//int fgetc(FILE *stream);
//从一个文件流读一个字符
//fgetc有可能获取字符失败，返回值为Int可以表示失败情况
//若返回值为char，则放入的都被认为是char型数据，无法表示失败情况

int main()
{
	FILE *fp = fopen("60_log.txt", "w");  //只写方式
	if (NULL == fp)    //打开失败
	{
		printf("%s:%d\n", strerror(errno), errno);
	}
	int i = 0;
	for (; i < 26; i++)
	{
		fputc('a' + i, fp);
		fputc(' ', fp);      //写入文件a-z字母
	}
	fclose(fp);
	fp = fopen("60_log.txt", "r");  //只读方式
	if (NULL == fp)    //打开失败
	{
		printf("%s:%d\n", strerror(errno), errno);
	}
    i = 0;
	int c;
	for (; i < 26; i++)
	{
		c = fgetc(fp);
		printf("%c", c);
		c = fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
	system("pause");
	return 0;
}