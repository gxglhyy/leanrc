#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void drawBall(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        printf("\n");
    }
    for (int j = 0; j < y; j++)
    {
        printf(" ");
    }
    printf("o");
}

int main()
{
    int x = 20;
    int y = 10;
    int vx = 3;
    int vy = 1;
    while (1)
    {
        system("cls");
        drawBall(x, y);
        //printf("%d %d \n", x, y);
        x = x + vx;
        y = y + vy;
        if (x > 25  || x < 0) {
            vx = -vx;
        }
        if (y > 80 || y < 0) {
            vy = -vy;
        }
        //getchar();
        Sleep(50);
    }
    
    drawBall(x, y);
    system("pause");
    
}