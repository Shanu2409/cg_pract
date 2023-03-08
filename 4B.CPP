//mid-point circle
#include <graphics.h>
#include <conio.h>

void plot(int h, int k, int x, int y)
{
	putpixel(h+x, k+y, 15);
	putpixel(h-x, k+y, 15);
	putpixel(h+x, k-y, 15);
	putpixel(h-x, k-y, 15);
	putpixel(h+y, k+x, 15);
	putpixel(h-y, k+x, 15);
	putpixel(h+y, k-x, 15);
	putpixel(h-y, k-x, 15);
}

int main()
{
   int gd = DETECT, gm, errorcode;
   int x,y,M,r,h,k;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");

   printf("Enter radius : ");
   scanf("%d",&r);

   printf("Enter the coordinates : ");
   scanf("%d%k",&h,&k);

   x = 0, y = r;
   M = 1 - r;

   while(x <= y)
   {
	plot(h,k,x,y);
	if(M < 0)
	{
		M = M + (2 * x) + 3;
	}
	else
	{
		M = M + 2 * (x - y) + 5;
		y = y - 1;
	}
	x = x + 1;
   }


   getch();
   closegraph();
}
