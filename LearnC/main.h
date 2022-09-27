#pragma once
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int pickcard(void);
int aipick(int player_total, int bot_total);
int askgame(void);
int startgame(int gt);
int errorcheck(int gametype);
int playerturn(int tot);
int ace(void);
int askfold(void);

void botgame(void);
void playergame(void);
void startlogo(void);
void endlogo(void);
void startup(void);
void logo21(void);
void judge(int playerA, int playerB);
void playerAwin(void);
void playerBwin(void);
void draw(void);

bool playerfold(int fold);