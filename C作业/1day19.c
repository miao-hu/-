1.实现strncpy


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char *Mystrncpy(char *dest, const char *src,int n)
{
	assert(dest);
	assert(src);
	char *p = dest;
	while (n>0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';
	return p;
	
	/*
	char *p = dest;
	while (n>0 && (*dest++ = *src++))
	{
		n--;
	}
	return p;
	*/
}
int main()
{
	char dest[20] = { 0 };
	char *src = "abcde";
	Mystrncpy(dest, src,2);
	printf("%s\n", dest);
	system("pause");
	return 0;
}


2.实现strncat

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char *Mystrncat(char *dest, const char *src, int n)
{
	assert(dest);
	assert(src);
	char *p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (n>0 &&(*dest++ = *src++))
	{
		n--;
	}
	return p;
}
int main()
{
	char dest[20] = "Hello";
	char *src = "bittttttt";
	Mystrncat(dest, src,5);
	printf("%s\n", dest);
	system("pause");
	return 0;
}


3.实现strncmp


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int Mystrncmp(const char *str1, const char *str2, int n)
{
	assert(str1);
	assert(str2);
	while (*str1 && *str2 && (*str1 == *str2) && (--n))
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	printf("%d\n", Mystrncmp("abcde", "abcdef",3));
	printf("%d\n", Mystrncmp("abcd", "abca",4));
	printf("%d\n", Mystrncmp("abcde", "abcdz",5));
	system("pause");
	return 0;
}


