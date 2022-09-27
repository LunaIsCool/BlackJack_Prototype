#include "main.h"

void playergame()
{
	bool foldA =false, foldB=false;
	printf("\nPLAY AGAINST PLAYER SELECTED\n");
	int playerA = 0, playerB = 0;
	while (foldA == false || foldB == false)
	{
		while (foldA == false && playerA <= 21)
		{
			printf("\nPlayer A's turn\n");
			int impA = playerturn(playerA);
			playerA = impA;
			printf("\nPlayer A total: %d\n", playerA);
			if (playerA > 21)
			{
				printf("\nPlayer A BUST!\n");
				break;
			}
			if (playerA == 21)
			{
				logo21();
				printf("\nCONGRATULATIONS!!!!\n");
				break;
			}
			else
			{
				int fans = askfold();
				foldA = playerfold(fans);
			}
		}
		if (playerA > 21)
		{
			break;
		}
		if (foldA == true)
		{
			printf("\nPlayer A Folds!\n");
		}
		

		while (foldB == false && playerB <= 21)
		{
			printf("\nPlayer B's turn\n");
			int impB = playerturn(playerB);
			playerB = impB;
			printf("\nPlayer B total: %d\n", playerB);
			if (playerB > 21)
			{
				printf("\nPlayer B BUST!\n");
				break;
			}
			if (playerB == 21)
			{
				logo21();
				printf("\nCONGRATULATIONS!!!!\n");
				break;
			}
			else
			{
				int fans = askfold();
				foldB = playerfold(fans);
			}

		}
		if (playerB > 21)
		{
			break;
		}

		if (foldB == true)
		{
			printf("\nPlayer B Folds!\n");
		}
		
	}
	judge(playerA, playerB);
	
}