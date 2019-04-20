#include "three_chess.h"


int main()
{
	int select = 0;
	int quiz = 0;
	while (!quiz)
	{
		ShowUI();
		printf("请输入一个数:");
		scanf("%d", &select);
		switch(select)
		{
			case 1:
				Game();
				break;
			case 0:
				quiz = 1;
				printf("退出游戏！\n");
				break;
			default:
				printf("请重新输入：\n");
				break;
		}
	}
	system("pause");
	return 0;
}