#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//int fgetc(FILE *stream);
//��һ���ļ�����һ���ַ�
//fgetc�п��ܻ�ȡ�ַ�ʧ�ܣ�����ֵΪInt���Ա�ʾʧ�����
//������ֵΪchar�������Ķ�����Ϊ��char�����ݣ��޷���ʾʧ�����

int main()
{
	FILE *fp = fopen("60_log.txt", "w");  //ֻд��ʽ
	if (NULL == fp)    //��ʧ��
	{
		printf("%s:%d\n", strerror(errno), errno);
	}
	int i = 0;
	for (; i < 26; i++)
	{
		fputc('a' + i, fp);
		fputc(' ', fp);      //д���ļ�a-z��ĸ
	}
	fclose(fp);
	fp = fopen("60_log.txt", "r");  //ֻ����ʽ
	if (NULL == fp)    //��ʧ��
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