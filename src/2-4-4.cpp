#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int height;
    height = 600;
    initgraph(600, height);
    fillcircle(300, 1 * height / 4, 50);
    fillcircle(300, 2 * height / 4, 50);
    fillcircle(300, 3 * height / 4, 50);
    _getch();
    closegraph();
    return 0;
}