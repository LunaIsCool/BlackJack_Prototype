#include "main.h"


int main(void)
{	
	startlogo();
	int rep = 1;
	do
	{
		startup();
		printf("Do you want to play again? (Y = 1/ N = 2)\n\n\n");
		scanf("%d", &rep);
		
	} while (rep == 1);
	endlogo();
	system("pause");
	return 0;
}
