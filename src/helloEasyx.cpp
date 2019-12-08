#include <graphics.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    initgraph(640,480);
    circle(50,50,100);
    _getch();
    closegraph();
    return 0;
}
