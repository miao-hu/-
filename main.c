#include "three_chess.h"


int main()
{
	int select = 0;
	int quiz = 0;
	while (!quiz)
	{
		ShowUI();
		printf("������һ����:");
		scanf("%d", &select);
		switch(select)
		{
			case 1:
				Game();
				break;
			case 0:
				quiz = 1;
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("���������룺\n");
				break;
		}
	}
	system("pause");
	return 0;
}