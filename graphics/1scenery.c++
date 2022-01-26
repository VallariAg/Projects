#include <graphics.h>

// gcc 1.c++ -o demo -lgraph

int main() {
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    // sky
    setcolor(CYAN);
    int sky[] = {0, 0, 0, 150, 700, 150, 700, 0, 0, 0};
    fillpoly(5, sky);
    // rectangle(0, 150, 0, 300);
    // floodfill(10,10, CYAN);

    // grass
    setcolor(GREEN);
    int grass[] = {0, 150, 700, 150, 700, 700, 0, 700, 0, 150};
    fillpoly(5, grass);

  
    // arc(47,45,325,100,7);
    // arc(57,45,80,215,7);

    // arc(83,25,325,100,7);
    // arc(57,45,80,215,7);

    // arc(47,45,325,100,7);
    // arc(57,45,80,215,7);
    // ellipse(532, 50, 10, 170, 30, 30);
    // ellipse(492, 50, 10, 170, 30, 30);
    // ellipse(532, 70, 190, 350, 30, 30);
    // ellipse(492, 70, 190, 350, 30, 30);
    // ellipse(542, 60, 280, 80, 40, 25);
    // ellipse(482, 60, 100, 260, 40, 25);
    // floodfill(40, 44, WHITE);



    // hut
    setcolor(LIGHTGRAY);
    rectangle(180, 220, 250, 300);
    floodfill(190, 230, LIGHTCYAN);
    
    setcolor(LIGHTMAGENTA);
    rectangle(250, 220, 370, 300);
    floodfill(260, 230, LIGHTRED);

    setcolor(CYAN); 
    int tri_head[] = {180, 220, 250, 220, 215, 170, 180, 220};
    fillpoly(4, tri_head);

    setcolor(LIGHTCYAN); 
    int pll_head[] = {215, 170, 250, 220, 370, 220, 350, 170, 215, 170};
    fillpoly(5, pll_head);
    // setfillstyle(1, 6);
    setcolor(DARKGRAY);
    rectangle(290, 250, 330, 270);
    floodfill(291, 251, DARKGRAY);
    rectangle(205, 260, 225, 300);
    floodfill(206, 261, DARKGRAY);

    //moutains
    int mountains[] = {1, 150, 50, 50, 100, 150, 1, 150};
    for (int i= 0; i < 6; i ++) {
        setcolor(BROWN);
        fillpoly(4, mountains);
        mountains[0] = mountains[4];
        mountains[1] = mountains [5];
        mountains[4] = mountains[0] + 100;
        mountains[6] = mountains[0];
        mountains[7] = mountains[1];
        mountains[2] = (mountains[0] + mountains[4]) / 2;   
    
    }
    //sun
    setcolor(YELLOW);
    circle(500, 70, 25);
    floodfill(501, 71, YELLOW);    

    //trees
    // tree trunks
    setcolor(BROWN);
    rectangle(520, 300, 540, 400);
    rectangle(420, 250, 440, 350);
    floodfill(521, 311, BROWN);
    floodfill(421, 261, BROWN);
    // tree
    setcolor(LIGHTGREEN);
    int tree[] = {480, 300, 580, 300, 520, 200, 480, 300};
    int treeB[] = {480, 350, 580, 350, 520, 250, 480, 350};
    int tree2[] = {380, 250, 480, 250, 420, 150, 380, 250};
    int tree2B[] = {380, 300, 480, 300, 420, 200, 380, 300};
    fillpoly(4, tree);
    fillpoly(4, treeB);
    fillpoly(4, tree2);
    fillpoly(4, tree2B);
    


    // birds
    setcolor(BLACK);
    arc(100, 50, 270, 360, 15);
    arc(130, 50, 180, 270, 15);

    
    arc(200, 70, 270, 360, 15);
    arc(230, 70, 180, 270, 15);
    arc(400, 30, 270, 360, 15);
    arc(430, 30, 180, 270, 15);
    // arc(100, 50, 270, 360, 15);
    // arc(130, 50, 180, 270, 15);

  // clouds
    setcolor(WHITE);
    ellipse(280,45,90,270,15,10);
    ellipse(295,53,180 - 180,360 - 180,25,10);
    ellipse(320,45,270,90,15,10);
    ellipse(295,37,0 + 180,180 + 180,25,10);
    floodfill(281, 46, WHITE);

    delay(10000);
    closegraph();
    return 0;
}
