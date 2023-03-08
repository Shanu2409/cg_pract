//divide screen into 4 parts

#include <graphics.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

   int gdriver = DETECT, gmode;

   initgraph(&gdriver, &gmode, "");

   int xmax,ymax;

   xmax = getmaxx();
   ymax = getmaxy();

   line(0,ymax/2,xmax,ymax/2);  //mid horizontal
   line(xmax/2,0,xmax/2,ymax);  //mid vertical
   line(0,0,xmax,0);  //top
   line(0,0,0,ymax);  //left
   line(xmax,0,xmax,ymax); //right
   line(0,ymax,xmax,ymax); //bottom

   circle(100,100,50); //circle


   line(xmax/2 + 50,100, xmax/2 + 50, 200); //left
   line(xmax/2 + 50, 100, xmax/2 + 200,100); //top
   line(xmax/2 + 200, 100, xmax/2 + 200, 200); //right
   line(xmax/2 + 50, 200, xmax/2 + 200, 200); //bottom


   ellipse(150,350,0,360,100,50);

   ellipse(500,350,0,180,100,50);




   getch();
   closegraph();
   return 0;
}

