#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void getup()
{
	system("cls");
	gotoxy(0,0);
	for(int x=0;x<45;x++)
	printf("__");
	gotoxy(3,2);
	printf("(*) Press 'Any key' to start. \n");
	gotoxy(3,3);
	printf("(*) Press 'Space-bar' to jump. \n");
	gotoxy(3,4);
	printf("(*) Press 'o' to Exit. \n");

	gotoxy(62,2);
	printf("SCORE : ");
	gotoxy(0,25);
	for(int x=0;x<45;x++)
	printf("__");
}
int t,speed;
void ds(int jump)
{
    int speed=40;
	static int a=1;

	if(jump==0)
		t=0;
	else if(jump==2)
		t--;
	else t++;
	gotoxy(2,15-t);
	printf("                 ");
	gotoxy(2,16-t);
	printf("         ********");
	gotoxy(2,17-t);
	printf("         ***  ***");
	gotoxy(2,18-t);
	printf(" *       *** *** ");
	gotoxy(2,19-t);
	printf(" **     *******  ");
	gotoxy(2,20-t);
	printf(" ***  ********** ");
	gotoxy(2,21-t);
	printf(" ************  * ");
	gotoxy(2,22-t);
	printf("   *********     ");
	gotoxy(2,23-t);
	if(jump==1 || jump==2){
        printf("    ** **       ");
        gotoxy(2,24-t);
        printf("    **   *  *      ");
	}
	else if(a==1)
	{
        printf("    ****  ***    ");
        gotoxy(2,24-t);
        printf("      **         ");
        a=2;
	}
	else if(a==2)
	{
        printf("     *** **      ");
        gotoxy(2,24-t);
        printf("          **     ");
        a=1;
	}
	gotoxy(2,25-t);
	if(jump!=0){
		printf("                ");
	}
    else
        printf("_________________");
	delay(speed);
}

void obj()
{
	static int x=0,scr=0;
	if(x==56 && t<4)
	{
	scr=0;
	speed=40;
	gotoxy(36,8);
	printf("GAME OVER");
	getch();
	gotoxy(36,8);
	printf("         ");
	}
	gotoxy(74-x,20);
	printf("*    * ");
	gotoxy(74-x,21);
	printf("*    * ");
	gotoxy(74-x,22);
	printf("****** ");
	gotoxy(74-x,23);
	printf("  *    ");
	gotoxy(74-x,24);
	printf("  *   ");
	x++;
	if(x==73)
	{
	x=0;
	scr++;
	gotoxy(70,2);
	printf("     ");
	gotoxy(70,2);
	printf("%d",scr);
	if(speed>20)
		speed--;
	}
}
