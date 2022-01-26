#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main()
{
    int gd=DETECT,gm;
    // int i;
    int c = 0;
    printf("\nTranslation(1) \nScaling(2) \nRotation(3)");
    printf("\nChoice: ");
    scanf("%d", &c);
    if(c == 1)
        {
            int x2,y2,x1,y1,x3,y3,x,y;
            int x22,y22,x11,y11,x33,y33;
            printf("\nEnter the co-ordinates of triangle: ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int arr[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            printf("\nEnter translation co-ordinates: ");
            scanf("%d%d",&x,&y);
            initgraph(&gd,&gm,NULL);
            drawpoly(4,arr);
            x11 = x1+x;
            y11 = y1+y;
            x22 = x2+x;
            y22 = y2+y;
            x33 = x3+x;
            y33 = y3+y;
            int arr2[] = {x11,y11,x22,y22,x33,y33,x11,y11};
            drawpoly(4,arr2);
        }
        else if(c == 2)
        {
            int x2,y2,x1,y1,x3,y3;
            float x,y;
            int x22,y22,x11,y11,x33,y33;
            printf("\nEnter the coordinates of triangle: ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int arr[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            printf("\nEnter scaling co-ordinates: ");
            scanf("%f%f",&x,&y);
            initgraph(&gd,&gm,NULL);
            drawpoly(4,arr);
            x11=(x1*x);
            y11=(y1*y);
            x22=(x2*x);
            y22=(y2*y);
            x33=(x3*x);
            y33=(y3*y);
            int arr1[] = {x11,y11,x22,y22,x33,y33,x11,y11};
            drawpoly(4,arr1);
        }
         else if(c == 3)
        {
            int x2,y2,x1,y1,x3,y3;
            int x22,y22,x11,y11,x33,y33;
            printf("\nEnter the coordinates of triangle: ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int arr[] = {x1,y1,x2,y2,x3,y3,x1,y1};

            float p=x2,q=y2;
            float Angle;
            printf("Enter the angle for rotation:");
            scanf("%f",&Angle);
            initgraph(&gd,&gm,NULL);
            drawpoly(4,arr);

            Angle=(Angle*3.14)/180;
            x11=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
            y11=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
            x22=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
            y22=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
            x33=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
            y33=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
            

            int arr1[] = {x11,y11,x22,y22,x33,y33,x11,y11}; 
            drawpoly(4, arr1);

        }
        else
            printf("INVALID CHOICE");
    getch();
    closegraph();
    return 0;
}
// 100 100 200 100 200 200
