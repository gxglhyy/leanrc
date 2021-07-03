#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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

void updateBall(int& x, int& y, int& dx, int& dy) {
    x = x + dx;
    y = y + dy;
    if (x > 25  || x < 0) {
        dx = -dx;
    }
    if (y > 80 || y < 0) {
        dy = -dy;
    }
}

void updateSleepTime(int& sleepTime) {
    if (kbhit()) {
        // ref: https://stackoverflow.com/questions/24708700/c-detect-when-user-presses-arrow-key
        switch(getch()) { // the real value 
            case 72:
                // code for arrow up
                sleepTime = sleepTime > 10 ? sleepTime - 10 : sleepTime; 
                break; 
            case 80:
                // code for arrow down 
                sleepTime = sleepTime < 200 ? sleepTime + 10 : sleepTime;
                break; 
            } 
    }
}

int main()
{
    int x = 20;
    int y = 10;
    int dx = 2;
    int dy = 3;
    int sleepTime = 50;
    while (1)
    {
        system("cls");
        printf("Sleep %d ms.\r", sleepTime);
        drawBall(x, y);
        updateBall(x, y, dx, dy);
        updateSleepTime(sleepTime);
        Sleep(sleepTime);
    }    
}