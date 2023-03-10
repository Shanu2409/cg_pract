
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
   int gd = DETECT, gm, errorcode;
   int x,y;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   
   
   //inner cube
   line(100,100,200,100); //top
   line(100,100,100,200); //left
   line(200,100,200,200); //right
   line(100,200,200,200); //bottom
   
   //outer cube
   line(150,150,250,150); //top
   line(150,150,150,250); //left
   line(250,150,250,250); //right
   line(150,250,250,250); //bottom

   //connection line
   line(100,100,150,150); //top-left
   line(100,200,150,250); //bottom-left
   line(200,100,250,150); //top-right
   line(200,200,250,250); //bottom-right
   
   int op;
   
   printf("Enter your choice : \n");
   printf("1. translation \n2. Scaling\n");
   scanf("%d",&op);
   
   switch(op){
   	case 1:
   		setcolor(4);
   		printf("Enter the x and y : ");
   		scanf("%d%d",&x,&y);
   		
   		line(100 + x,100 + y,200 + x,100 + y); //top
	    line(100 + x,100 + y,100 + x,200 + y); //left
	    line(200 + x,100 + y,200 + x,200 + y); //right
	    line(100 + x,200 + y,200 + x,200 + y); //bottom
	   
	    //outer cube
	    line(150 + x,150 + y,250 + x,150 + y); //top
	    line(150 + x,150 + y,150 + x,250 + y); //left
	    line(250 + x,150 + y,250 + x,250 + y); //right
	    line(150 + x,250 + y,250 + x,250 + y); //bottom
	
	    //connection line
	    line(100 + x,100 + y,150 + x,150 + y); //top-left
	    line(100 + x,200 + y,150 + x,250 + y); //bottom-left
	    line(200 + x,100 + y,250 + x,150 + y); //top-right
	    line(200 + x,200 + y,250 + x,250 + y); //bottom-right
	    
	    break;
	    
	    
	case 2:
		setcolor(14);
   		printf("Enter the x and y : ");
   		scanf("%d%d",&x,&y);
   		
   		line(100 * x,100 * y,200 * x,100 * y); //top
	    line(100 * x,100 * y,100 * x,200 * y); //left
	    line(200 * x,100 * y,200 * x,200 * y); //right
	    line(100 * x,200 * y,200 * x,200 * y); //bottom
	   
	    //outer cube
	    line(150 * x,150 * y,250 * x,150 * y); //top
	    line(150 * x,150 * y,150 * x,250 * y); //left
	    line(250 * x,150 * y,250 * x,250 * y); //right
	    line(150 * x,250 * y,250 * x,250 * y); //bottom
	
	    //connection line
	    line(100 * x,100 * y,150 * x,150 * y); //top-left
	    line(100 * x,200 * y,150 * x,250 * y); //bottom-left
	    line(200 * x,100 * y,250 * x,150 * y); //top-right
	    line(200 * x,200 * y,250 * x,250 * y); //bottom-right
	    
	    break;
   }
   
   
   
   getch();
   closegraph();
}
