#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    initgraph(600, 600);
    int y = 50;
    while(y < 600) {
        cleardevice();
        fillcircle(300, y, 20);
        Sleep(10);
        y += 1;
    }
    _getch();
    closegraph();
    return 0;
}