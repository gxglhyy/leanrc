#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    initgraph(600, 600);
    int r = 20;
    int d = 1;
    while(r < 600) {
        if (r > 600 / sqrt(2) + 30 || r < 5) {
            d = -d;
        }
        cleardevice();
        fillcircle(300, 300, r);
        Sleep(10);
        r += d;
    }
    _getch();
    closegraph();
    return 0;
}