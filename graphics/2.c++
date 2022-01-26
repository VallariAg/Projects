#include<graphics.h>  
#include<stdio.h>
// gcc 1.c++ -o demo -lgraph

int main()  
{  
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);

    int  x0 = 0, y0 = 0, x1 = 300, y1 = 200;

    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,RED);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,RED);  
            p=p+2*dy;}  
            x=x+1;  
        }  

    delay(100000000);
    closegraph();
    return 0; 
}  
