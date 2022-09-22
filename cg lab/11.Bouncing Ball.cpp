#include<graphics.h>
#include<stdio.h>
int y;
int move(int z)
{
	int x = getmaxx()/2;
            while(y+40<=getmaxy())
            {
                circle(x,y,40);
                floodfill(x+10,y+10,WHITE);
                y++;
                  delay(10);
                cleardevice();
            }
            while(y>=z)
            {
                circle(x,y,40);
                floodfill(x+10,y+10,WHITE);
                y--;
                delay(10);
                cleardevice();
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setfillstyle(SOLID_FILL,RED);
    int z=getmaxy()/2;
    y=z;
    move(z+50);
    move(z+100);
    move(z+150);
    move(z+200);
    getch();
    closegraph();
}
