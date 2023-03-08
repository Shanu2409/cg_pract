//2-d transformation
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    printf("1.Translation\n2.Rotation\n3.Scaling\n");
    
    printf("Selection : ");
    scanf("%d", &s);
    
    switch(s) {
    	case 1: 
    		int x1,x2,x3,x4,y1,y2,y3,y4,x,y;
//    		printf("Enter x1 & y1 : ");
//    		scanf("%d%d",&x1,&y1);
//    		
//    		printf("Enter x2 & y2 : ");
//    		scanf("%d%d", &x2,&y2);
//    		
//    		printf("Enter x3 & y3 : ");
//    		scanf("%d%d", &x3,&y3);
//    		
//    		printf("Enter x4 & y4 : ");
//    		scanf("%d%d", &x4,&y4);
    		
    		x1 = y1 = x3 = 100;
    		x2 = y3 = x4 = y4 = 200;
    		
    		
    		line(x1,y1,x2,y2);
    		line(x2,y2,x4,y4);
    		line(x1,y1,x3,y3);
    		line(x3,y3,x4,y4);
    		
    		setcolor(13);
    		
    		printf("Enter x and y the translation factors : ");
    		scanf("%d%d", &x,&y);
    		
    		line(x1+x,y1+y,x2+x,y2+y);
    		line(x2+x,y2+y,x4+x,y4+y);
    		line(x1+x,y1+y,x3+x,y3+y);
    		line(x3+x,y3+y,x4+x,y4+y);
    		
    		break;
    		
    	case 2: 
    		x1 = y1 = 100;
    		int r;
			double rdn;
    		
    		line(0,0,x1,y1);
    		
    		printf("Enter the degre : ");
    		scanf("%d",&r);
    		rdn = (r*(3.14/180));
    		
    		printf("rnd : %d", rdn);
    		
    		
    		x1 = x1 * cos(rdn) + y1 * sin(rdn);
    		y1 = y1 * sin(rdn) + x1 * cos(rdn);
    		
    		printf("x : %dy = %d", x1,y1);
    		
    		setcolor(13);
    		
    		line(0,0,x1,y1);
    		
    		break;
    		
    	case 3:
    		x1,x2,x3,x4,y1,y2,y3,y4,x,y;
    		
	
    		
    		x1 = y1 = x3 = 100;
    		x2 = y3 = x4 = y4 = 200;
    		
    		
    		line(x1,y1,x2,y2);
    		line(x2,y2,x4,y4);
    		line(x1,y1,x3,y3);
    		line(x3,y3,x4,y4);
    		
    		setcolor(13);
    		
    		printf("Enter x and y the scalling factors : ");
    		scanf("%d%d", &x,&y);
    		
    		line(x1*x,y1*y,x2*x,y2*y);
    		line(x2*x,y2*y,x4*x,y4*y);
    		line(x1*x,y1*y,x3*x,y3*y);
    		line(x3*x,y3*y,x4*x,y4*y);
    		
    		
    		}
	
	int x, y;
			printf("Enter x and y the translation factors : ");
    		scanf("%d%d", &x,&y);
    
	closegraph();
    return 0;
}
