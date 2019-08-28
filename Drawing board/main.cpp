#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<conio.h>



int main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
POINT cur;
while(1)
{	GetCursorPos(&cur);
    if(GetAsyncKeyState(VK_LBUTTON))
		{
		circle(cur.x, cur.y, 2);
		}
    delay(1);
};
getch();
closegraph();
return 0;
}

