#include "main.h"

int askgame()
{
	int typenum;
	printf("Press 1 to play with computer, Press 2 to play with another player, or Press 3 to exit!\n\n");
	scanf("%d", &typenum);
	return typenum;
}

int errorcheck(int gametype)
{
	while (gametype != 1 && gametype != 2 && gametype != 3)
	{
		printf("ERROR :: Please choose between 1, 2 , and 3.\n");
		scanf("%d", &gametype);
	}
	int ret = gametype;
	return ret;
}

int startgame(int gt)
{

	if (gt == 1)
	{
		botgame();
	}

	else if (gt == 2)
	{
		playergame();
	}

	else if (gt == 3)
	{
		printf("\n                                      ");
		printf("Ok Bye :(\n\n\n");
	}

}

void startup()
{
	int inigame, finalgame;
	inigame = askgame();
	finalgame = errorcheck(inigame);
	startgame(finalgame);
}