#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_X  25
#define MIN_X 0
const int MIN_Y = 3;
const int MAX_Y = 80;

void drawSimpleAirCraft(int x, int y, int isFire);
void updateState(int& x, int& y, int& isFire);

int main() {
    int x = 5;
    int y = 10;
    int isFire = 0;
    while(1) {
        system("cls");
        drawSimpleAirCraft(x, y, isFire);
        updateState(x, y, isFire);
    }
}

void drawSimpleAirCraft(int x, int y, int isFire) {
    for(int i = 0; i < x; i++) {
        if (isFire == 0) {
            printf("\n");
        }
        else {
            for(int j = 0; j < y; ++j) {
                printf(" ");
            }
            printf("|\n");
        }
    }
    for(int i = 0; i < y; i++) {
        printf(" ");
    }
    printf("*\n");
    for(int i = 0; i < y - 2; ++i) {
        printf(" ");
    }
    printf("*****\n");
    for(int i = 0; i < y - 1; ++i) {
        printf(" ");
    }
    printf("* *\n");
}
void updateState(int& x, int& y, int& isFire) {
    isFire = 0;
    if (kbhit()) {
        // ref: https://stackoverflow.com/questions/24708700/c-detect-when-user-presses-arrow-key
        switch(getch()) {
            case 72:    // code for arrow up
                if ( x - 1 >= MIN_X) {
                    x = x - 1;  
                }
                break; 
            case 80:    // code for arrow down
                x = x + 1 <= MAX_X ? x + 1 : x;
                break;
            case 75:    // code for arrow left
                y - 1 >= MIN_Y ? y-- : 0;
                break;
            case 77:    // code for arrow right
                y + 1 <= MAX_Y ? y++ : 0;
                break;
            case ' ':
                isFire = 1;
                break;
            } 
    }
}