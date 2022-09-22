#include <graphics.h>
#include <conio.h>
int main(){
    int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    line(100,100,200,100);    //will draw a horizontal line
	getch();
    closegraph();
    return 0;
}
