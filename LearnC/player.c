#include "main.h"

int pickcard(void)
{

    srand((unsigned)time(NULL));
    int cardNum = (rand() % 10);
    if (cardNum == 0 || cardNum == 11)
    {
       cardNum = ace();
    }

    return cardNum;

}

int ace(void)
{
    int chosenace;
    printf("\nYou got an ace! Pick 1 or 11!\n");
    scanf("%d", &chosenace);
    while (chosenace != 1 && chosenace != 11)
    {
        printf("ERROR :: Please choose 1 or 11.\n");
        scanf("%d", &chosenace);
    }
    return chosenace;
}


int playerturn(int tot)
{
    int currentcard;
    currentcard = pickcard();
    printf("\nYour card was %d!\n", currentcard);
    tot += currentcard;
    return tot;
}

int askfold(void)
{
    int foldanswer;
    printf("\nDo you want to fold? (Y = 1/ N = 2)\n");
    scanf("%d",&foldanswer);
    return foldanswer;
}

bool playerfold(int fold)
{
    while (fold != 1 && fold != 2)
    {
        printf("\nERROR :: Please choose between 1 or 2.\n");
        scanf("%d", &fold);
    }
    if (fold == 1)
    {
        return true;
    }
    else if (fold == 2)
    {
        return false;
    }
}

void judge(int playerA, int playerB)
{
    if (playerA > 21 || playerB > 21)
    {
        if (playerA > 21)
        {
            printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
            playerBwin();
        }
        else if (playerB > 21)
        {
            printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
            playerAwin();
        }
    }
    else if (playerA == playerB && playerA <=21 && playerB <=21)
    {
        printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
        draw();
    }
    else
    {
        int leftA, leftB;
        leftA = 21 - playerA;
        leftB = 21 - playerB;
        if (leftA > leftB)
        {
            printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
            playerBwin();
        }
        else if (leftB > leftA)
        {
            printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
            playerAwin();
        }
        else
        {
            printf("\nPlayer A total: %d\nPlayer B total: %d\n", playerA, playerB);
            printf("ERROR");
        }

    }
    
}

