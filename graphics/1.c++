#include <graphics.h>

int main()
{
   int gd = DETECT,gm;
   initgraph(&gd,&gm,NULL);

   int house[] = {100,100,400,300};
   int house_dim[] = {300, 200};
   
   line(50, 100, 150, 250);
   circle(250, 70, 15);
   line(house[0], house[1], 250, 20);
   line(250, 20, house[0] + house_dim[0], house[1]);
   // rectangle(200,200,300,300);
   rectangle(house[0], house[1], house[2], house[3]);
   rectangle(house[0] + 100, house[1] + 100, house[2] - 100, house[3]);
   
   // ellipse(160, 300, 0, 360, 75, 35);

   delay(5000);
   closegraph();
   return 0;
}

// gcc 1.c++ -o demo -lgraph
// ./demo
