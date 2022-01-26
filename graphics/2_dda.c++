#include<graphics.h>  
// gcc 1.c++ -o demo -lgraph

int main()  
{  
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);

    float x, y,dx,dy,steps;  
    int x0, x1, y0, y1;  
     
    x0 = 500 , y0 = 200, x1 = 200, y1 = 100; 

    dx = (x1 - x0);  
    dy = (y1 - y0);  
    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    dx = dx / steps;  
    dy = dy / steps;  
    x = x0;  
    y = y0;  
    int i = 1;  
    while(i<= steps)  
    {  
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;  
        i = i + 1;  
    }  
    delay(3000);
    closegraph();
    return 0; 
}  
