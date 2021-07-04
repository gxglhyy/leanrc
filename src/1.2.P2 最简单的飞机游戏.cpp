#include <stdio.h>  // 头文件
#include <stdlib.h>
#include <conio.h>

#define MAX_X  25   // 宏（marcor）定义
#define MIN_X 0
const int MIN_Y = 3;
const int MAX_Y = 80;   // 全局变量（作用域的概念）声明与赋值；常量（const）定义；整数类型（int）。

void drawSimpleAirCraft(int x, int y);  // 函数声明
void updatePos(int& x, int& y); // 函数声明；引用参数

int main() {    // C++ 程序入口。
    int x = 5;  // 局部变量声明与赋值
    int y = 10;
    while(1) {  // while 循环
        system("cls");  // 函数调用
        drawSimpleAirCraft(x, y);
        updatePos(x, y);
    }
}

void drawSimpleAirCraft(int x, int y) { // 函数定义
    for(int i = 0; i < x; i++) {    // for 循环；局部变量
        printf("\n");   // 调用 printf 函数输出；转义字符。
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
void updatePos(int& x, int& y) {
    if (kbhit()) {
        // ref: https://stackoverflow.com/questions/24708700/c-detect-when-user-presses-arrow-key
        switch(getch()) {   // switch 语句；字符编码
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
            } 
    }
}