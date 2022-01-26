// https://freefrontend.com/css-timelines/
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int maxx,maxy,midx,midy;


int main()
{
    int x,y,z,o,x1,x2,y1,y2;
    int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
    int ch;
	printf("Choose: \n 1. Translation\n 2. Scaling\n 3. Rotation");
    scanf("%d", &ch);
    switch(ch) {
	case 1: {
		printf("Enter translation factor");
    		scanf("%d%d",&x,&y);


    		maxx=getmaxx();
    		maxy=getmaxy();
    		midx=maxx/2;
    		midy=maxy/2;

    		line(midx,0,midx,maxy);
    		line(0,midy,maxx,midy);
    		bar3d(midx+50,midy-100,midx+60,midy-90,10,1);

    
    		bar3d(midx+x+50,midy-(y+100),midx+x+60,midy-(y+90),10,1);
		break;
	}		
	case 2: {
		int x,y,z,o,x1,x2,y1,y2;

		maxx=getmaxx();
		maxy=getmaxy();
		midx=maxx/2;
		midy=maxy/2;

		printf("Enter scaling factors");
		scanf("%d%d%d", &x,&y,&z);	

		line(midx,0,midx,maxy);
		line(0,midy,maxx,midy);

		bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

		bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
		break;
	}
	case 3: {
		int x,y,z,o,x1,x2,y1,y2;

		printf("Enter rotating angle");
		scanf("%d",&o);
	
		maxx=getmaxx();
		maxy=getmaxy();
		midx=maxx/2;
		midy=maxy/2;

		line(midx,0,midx,maxy);
		line(0,midy,maxx,midy);

		bar3d(midx+50,midy-100,midx+60,midy-90,5,1);


		x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
		y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
		x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
		y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);

		bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1); // about z axis
		bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1); // about x axis
		bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1); // about y axis

	}
    }
    

    getch();
    closegraph();
    return 0;
}
