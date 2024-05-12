#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

int length;
int bend_no;
int len;
char key;
struct coordinate//There are 2 coordinate axis such as X-axis and Y-axis//
{
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500],food,body[30];

void Delay(long double k)//This function delays the execution.//
{
    Score();
    long double i;
    for(i=0; i<=(10000000); i++);
}


