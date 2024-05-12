#include <stdio.h>

void Up();

int bend_no, length, len;

void Up() {
    int i;
    for(i = 0; i <= (bend[bend_no].y - head.y) && len < length; i++) {
        GotoXY(head.x, head.y + i);
        if(len == 0)
            printf("^");
        else
            printf("*");
        body[len].x = head.x;
        body[len].y = head.y + i;
        len++;
    }
}
