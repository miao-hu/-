#include "mine.h"

int main()
{
	int select = 0, quiz = 0;
	while (!quiz)
	{
		Menu();
		printf("Plese select:>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			quiz = 1;
			printf("Exit\n");
			break;
		default:
			printf("Select error!Please again\n");
			break;
		}
	}
	return 0;
}
