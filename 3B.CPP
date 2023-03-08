
#include <graphics.h>
#include <conio.h>
int main()
{
   int gd = DETECT, gm, errorcode;
   int x,y,x1,x2,y1,y2,dx,dy;
   int e;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");

  printf("Enter first point : ");
   scanf("%d%d",&x1,&y1);
   
   printf("Enter second point ; ");
   scanf("%d%d",&x2,&y2);
   
   

   dx = x2 - x1;
   dy = y2 - y1;
   e = (2*dy) - dx;
   x = x1;
   y = y1;

   for(int i = 0; i < dx;i++)
   {
	putpixel(x,y,13);
	while(e >= 0)
	{
		y = y + 1;
		e = e - (2 * dx);
	}
	x = x + 1;
	e = e + (2 * dy);
   }

   getch();
   closegraph();
   return 0;
}
