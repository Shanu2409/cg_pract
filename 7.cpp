#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	int gd = DETECT, gm;
	int x1=100, y1=100, x2=200, y2=100, x3=200, y3=200;
	int dfx, dfy;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	
	line(getmaxx() / 2, 0, getmaxx() / 2,getmaxy());
	line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);
	setcolor(15);
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);
	setcolor(4);
	line(getmaxx() - x1, getmaxy() - y1,getmaxx() - x2, getmaxy() - y2);
	line(getmaxx() - x2, getmaxy() - y2,getmaxx() - x3, getmaxy() - y3);
	line(getmaxx() - x3, getmaxy() - y3,getmaxx() - x1, getmaxy() - y1);
	setcolor(15);
	line(getmaxx() - x1, y1,getmaxx() - x2, y2);
	line(getmaxx() - x2, y2,getmaxx() - x3, y3);
	line(getmaxx() - x3, y3,getmaxx() - x1, y1);
	setcolor(2);
	line(x1, getmaxy() - y1, x2,getmaxy() - y2);
	line(x2, getmaxy() - y2, x3,getmaxy() - y3);
	line(x3, getmaxy() - y3, x1,getmaxy() - y1);
	
	getch();
	closegraph();
}


