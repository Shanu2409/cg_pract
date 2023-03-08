
#include <graphics.h>
#include <conio.h>
#include <math.h>
int main()
{
   int gd = DETECT, gm, errorcode;
   int s;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");

   
   
   
	int x1=200, y1=200, x2 = 300, y2 = 200, x3 = 200, y3 = 300 , x4 = 300, y4 = 300, shx,shy;
	
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x2,y2,x4,y4);
	line(x3,y3,x4,y4);
	
	printf("1.Shearing With 'x' axis\n2.Shearing With 'y' axis\n3.Shearing With 'xy' axis \n");
    
    printf("Selection : ");
    scanf("%d", &s);
    
    switch(s){
    	case 1:
    		printf("Enter the shx : ");
    		scanf("%d",&shx);
    		
    		x1 = x1 + shx ;
    		x2 = x2 + shx ;
    		
    		printf("x1 : %d x2 : %d", x1, x2);
    		
    		
    		
    		break;
    	case 2:
    		printf("Enter shy : ");
    		scanf("%d", &shy);
    		
    		y2 = y2 - shy;
    		y4 = y4 - shy;
    		
    		break;
    		
    	case 3:
    		printf("Enter the shx : ");
    		scanf("%d",&shx);
    		printf("Enter shy : ");
    		scanf("%d", &shy);
    		
    		x1 = x1 + shx;
    		x2 = x2 + shx;
    		y2 = y2 - shy;
    		y4 = y4 - shy;
    	
	}
	
	setcolor(9);
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x2,y2,x4,y4);
	line(x3,y3,x4,y4);
	
	
	
	
	
	getch();

   closegraph();
}

