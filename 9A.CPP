
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void sad()
{
	ellipse(300,350,0,180,90,45);
}
void smile()
{
	ellipse(300,350,180,0,90,45);
}
int main()
{
   int gd = DETECT, gm, errorcode;
   int i;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   for(i=0;i<1000;i++)
   {
	circle(300,250,200);
	circle(230,160,20);
	circle(360,160,20);
	line(300,200,350,250);
	line(300,200,250,250);
	line(350,250,250,250);
	if(i%2==0)
	  sad();
	else
	  smile();
	delay(500);
	cleardevice();
   }
   getch();
   closegraph();
}
