1.调整数组使奇数全部都位于偶数前面。 

题目： 
输入一个整数数组，实现一个函数， 
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
所有偶数位于数组的后半部分。 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void swap(int arr[],int sz)
{
	int arr1[10] = { 0 };
	int i,j=0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr1[j++] = arr[i];
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[j++] = arr[i];
		}
	}
	for (i=0 ; i<sz; i++)
	{
		arr[i] = arr1[i];
	}
}

int main()
{
	int arr[10] = { 0 };
	int i, sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <sz ; i++)        //数组赋值1 2 3 4 5 6 7 8 9 10
		 arr[i]=i + 1;     
	printf("原数组：");
	for (i = 0; i < sz; i++)        
		printf("%d ", arr[i]);
	printf("\n");
	swap(arr,sz);
	printf("现数组：");
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}


2. 
//杨氏矩阵 
有一个二维数组. 
数组的每行从左到右是递增的，每列从上到下是递增的. 
在这样的数组中查找一个数字是否存在。 
时间复杂度小于O(N); https://s1.shucaixiaoshuo.com/s?type=2&r=20&mv_ref=mini.360.cn&enup=CAABbxMtDggAAg4tE28A&mvid=MjUwNjIwMDQ2NDA1NDE0MDQwMjAwMTg&bid=1349ca86f70b8406&price=AAAAAFy5yRsAAAAAAAz1X2ZwROq+it3aKH2/pA==&finfo=DAABCAABAAAByAgAAgAAAKkEAAM/ZfnN7mmeXAAIAAIAAAADCgADbIat2lAP1d4IAAQAAACqCgAJAAAAAAAAUJgGAAoAAAYADS23CAAOAAAAfAoADwAAAAAARZSAAA&ugi=FYaQehWulltMFQIVzgQV2gQVAAAV7/zwyAgWBBXIARaA84HOu7jDBQA&uai=FZjrfiUCFQIWgJ7byLuw0obZARXyByWrptf/DiUAFRIUCBwW+q+bj8GC0fd5FQAAAA&ubi=Fa7dVBXan9QCFbCd5RcVsqDaWRUEFQIW2O/YpxcWgJ7wr8X21obZATQCFrDCgoAIJQYV2aaAkgQVwgUVADbf85vO0OLlvVcA&clickid=0&cpx=__OFFSET_X__&cpy=__OFFSET_Y__&cs=__EVENT_TIME_START__&ce=__EVENT_TIME_END__&csign2=gG_WUTqBh8U=&url=http%3A%2F%2Fzc.yiche361.xyz

数组： 
1 2 3 
2 3 4 
3 4 5 


1 3 4 
2 4 5 
4 5 6 

1 2 3 
4 5 6 
7 8 9 


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define M 5
#define N 5
/*
杨氏矩阵：有一个二维数组，数组的每行从左到右是递增的，每列从上到下是递增的.
数组的最小值为a[0][0]，最大值为a[n][n]
在这样的数组中查找一个数字是否存在
先将要查找的数与数组右上角的数值进行比较，若小于则向左一列查，若大于则向下一行查
*/

int YangSearch(int a[M][N], int key,int *i,int *j)
{
	int row = 0, col = N-1;
	if (key<a[0][0] || key>a[M][N])
		return -1;
	while (row < M&& col >= 0)
	{
		if (key == a[row][col])
		{
			*i = row;
			*j = col;
			return 1;
		}
		else if (key>a[row][col])
		{
			row++;
		}
		else if (key < a[row][col])
		{
			col--;
		}
	}
	return -1;
}

int main()
{
	int a[M][N] = { { 1, 2, 3,4,5 }, { 2, 3, 4,5,6 }, { 3, 4, 5,6,7 } ,\
	{4, 5, 6, 7, 8}, { 5, 6, 7, 8, 9 } };
	int key,i=-1,j=-1;
	printf("Please enter number:");
	scanf("%d", &key);
	int ret = YangSearch(a, key,&i, &j);
	if (ret)
	{
		printf("查找到%d,它的位置为:a[%d][%d]\n", key, i, j);
	}
	else
	{
		printf("没有找到%d这个数字\n",key);
	}
	system("pause");
	return 0;
}
