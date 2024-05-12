#include <stdio.h>
 
void Left();
void Right();


int bend_no, length, len;

void Left() {
    int i;
    for(i = 0; i <= (bend[bend_no].x - head.x) && len < length; i++) {
        GotoXY(head.x + i, head.y);
        if(len == 0)
            printf("<");
        else
            printf("*");
        body[len].x = head.x + i;
        body[len].y = head.y;
        len++;
    }
   
}

void Right() {
    int i;
    for(i = 0; i <= (head.x - bend[bend_no].x) && len < length; i++) {
        body[len].x = head.x - i;
        body[len].y = head.y;
        GotoXY(body[len].x, body[len].y);
        if(len == 0)
            printf(">");
        else
            printf("*");
        len++;
    }
    
}

