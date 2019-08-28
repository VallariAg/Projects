#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class pieces
{public:
    char king, queen, bishop1, bishop2, rook, pawns[8], knight;


};

class white : public pieces
{ public:
        white();
      int pawn(int p, int q, int m, int n, char a[8][8]);
      int  wrook(int p, int q, int m, int n, char a[8][8]);
      int wknight(int q, int p, int m, int n, char a[8][8]);
      int wking(int p, int q, int m, int n, char board[8][8]);
};

       white::white()
        {
            king = 'o';
            queen= 'q';

           for(int i=0;i<8;i++)
           {
               pawns[i]='p';
           }
            knight = 'k';
            bishop1 = bishop2 = 'b';
            rook = 'r';
        }

class black : public pieces
{
public:
    black();
int pawn(int p, int q, int m, int n, char a[8][8]);
int wrook(int p, int q, int m, int n, char a[8][8]);
int wknight(int q, int p, int m, int n, char a[8][8]);
int wking(int p, int q, int m, int n, char board[8][8]);
};

black::black()
        {
            king = 'O';
            queen= 'Q';
        for(int i=0;i<8;i++)
           {
               pawns[i]='P';
           }
            knight = 'K';
            bishop1 = bishop2 = 'B';
            rook = 'R';
        }

void first(char b[8][8])
    { white w;
      black bk;
        b[0][0]=w.rook;
        b[0][1]=w.knight;
        b[0][2]=w.bishop1;
        b[0][3]=w.king;
        b[0][4]=w.queen;
        b[0][5]=w.bishop2;
        b[0][6]=w.knight;
        b[0][7]=w.rook;
        for(int i=0;i<8;i++)
        {
            b[1][i]=w.pawns[i];
        }
        for(int i=0;i<8;i++)
        {
            b[6][i]=w.pawns[i];
        }

        b[7][0]=bk.rook;
        b[7][1]=bk.knight;
        b[7][2]=bk.bishop1;
        b[7][3]=bk.king;
        b[7][4]=bk.queen;
        b[7][5]=bk.bishop2;
        b[7][6]=bk.knight;
        b[7][7]=bk.rook;

    }

int color(int p, int q)
{
    if((p%2==0&&q%2!=0)||(p%2!=0&&q%2==0))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int place(int p, int q, char b[8][8])
{
    if(b[p-1][q-1]==' ')
    {
        return 0;
    }
    else if(b[p-1][q-1]<'z'&&b[p-1][q-1]>'a')
    {
        return 1;
    }
    else if(b[p-1][q-1]<'Z'&&b[p-1][q-1]>'A')
    {
        return 2;
    }
}
int white::pawn(int p, int q, int m, int n, char a[8][8])
{ int k=place(m,n,a);
    if(k==0)
    {  if((m==p+1)&&(q==n))
       {
           a[p-1][q-1]=' ';
           a[m-1][n-1]=pawns[n-1];
           return 0;
       }
       else
       {
           return 1;
       }
    }
    else if(k==1)
    {
        return 1;
    }
    else if(k==2)
    {
        if(((m==p+1)&&(n==q+1))||((m==p+1)&&(n==q-1)))
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=pawns[q-1];
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int black::pawn(int p, int q, int m, int n, char a[8][8])
{ int k=place(m,n,a);
    if(k==0)
    {  if((m==p-1)&&(q==n))
       {
           a[p-1][q-1]=' ';
           a[m-1][n-1]=pawns[n-1];
           return 0;
       }
       else
       {
           return 1;
       }
    }
    else if(k==2)
    {
        return 1;
    }
    else if(k==1)
    {
        if(((m==p-1)&&(n==q+1))||((m==p-1)&&(n==q-1)))
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=pawns[q-1];
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int white::wrook(int p, int q, int m, int n, char a[8][8])
{
    int k=place(m,n,a);

    if(k==0||k==2)
    {
        if(p==m||q==n)
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=rook;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==1)
    {
        return 1;
    }
}
int black::wrook(int p, int q, int m, int n, char a[8][8])
{
    int k=place(m,n,a);

    if(k==0||k==1)
    {
        if(p==m||q==n)
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=rook;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==2)
    {
        return 1;
    }
}

int white::wknight(int p, int q, int m, int n, char a[8][8])
{
     int k=place(m,n,a);

    if(k==0||k==2)
    {
        if(((n==q+1)&&((m==p+2)||(m==p-2))) || ((n==q+2)&&((m==p+1)||(m==p-1))) || ((n==q-1)&&((m==p+2)||(m==p-2))) || ((n==q-2)&&((m==p+1)||(m==p-1))) )
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=knight;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==1)
    {
        return 1;
    }
}
int black::wknight(int p, int q, int m, int n, char a[8][8])
{
     int k=place(m,n,a);

    if(k==0||k==1)
    {
       if(((n==q+1)&&((m==p+2)||(m==p-2))) || ((n==q+2)&&((m==p+1)||(m==p-1))) || ((n==q-1)&&((m==p+2)||(m==p-2))) || ((n==q-2)&&((m==p+1)||(m==p-1))) )
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=knight;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==2)
    {
        return 1;
    }
}

int white::wking(int p, int q, int m, int n, char a[8][8])
{
      int k=place(m,n,a);

    if(k==0||k==2)
    {
        if((p-m<2)&&(p-m>(-2))&&(q-n<2)&&(q-n>(-2)))
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=king;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==1)
    {
        return 1;
    }
}
int black::wking(int p, int q, int m, int n, char a[8][8])
{
      int k=place(m,n,a);

    if(k==0||k==1)
    {
        if((p-m<2)&&(p-m>(-2))&&(q-n<2)&&(q-n>(-2)))
        {
            a[p-1][q-1]=' ';
            a[m-1][n-1]=king;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(k==2)
    {
        return 1;
    }
}
int main()
{
    white p1; black p2;
 char board[8][8] = {" "};
 //start
first(board);
int c=1;
//board
WRONG:
    cout<<"WRONG MOVE TRY AGAIN"<<endl;
NEXT:

cout<<"   1  2  3  4  5  6  7  8 "<<endl;
for(int i=0;i<8;i++)
{
    cout<<i+1<<"  ";
    for(int j=0;j<8;j++)
    {
        cout<<board[i][j]<< "  ";
    }
    cout<<endl;

}
 int x, y, a, b;
 int r=0;


if(c%2!=0)
{cout<<endl<<endl<<"WHITE MOVES:";}
else
{
    cout<<endl<<endl<<"BLACK MOVES:";
}
cout<<endl<<"ENTER COORDINATES OF PIECE TO MOVE:"<<endl<<"X: ";
cin>>x;
cout<<endl<<"Y: ";
cin>>y;
cout<<endl<<"ENTER COORINATES OF PLACE TO GO:"<<endl<<"X: ";
cin>>a;
cout<<endl<<"Y: ";
cin>>b;

if(c%2!=0)
{
    if(board[x-1][y-1]==p1.pawns[y-1])
    {
        r=p1.pawn(x,y,a,b,board);
        if(r==1)
        {
            goto WRONG;
        }
    }
    else if(board[x-1][y-1]==p1.bishop1)
        {

        }
    else if(board[x-1][y-1]==p1.bishop2)
        {

        }
    else if(board[x-1][y-1]==p1.knight)
    {
         r=p1.wknight(x,y,a,b,board);
        if(r==1)
        {
            goto WRONG;
        }
    }
    else if(board[x-1][y-1]==p1.rook)
    {
      r=p1.wrook(x,y,a,b,board);
      if(r==1)
      {
          goto WRONG;
      }
    }
    else if(board[x-1][y-1]==p1.queen)
    {

    }
    else if(board[x-1][y-1]==p1.king)
    {
        r=p1.wrook(x,y,a,b,board);
      if(r==1)
      {
          goto WRONG;
      }
    }
    else
    {
    goto WRONG;
    }
}
else
{
    if(board[x-1][y-1]==p2.pawns[y-1])
    {
        r=p2.pawn(x,y,a,b,board);
        if(r==1)
        {
            goto WRONG;
        }
    }
    else if(board[x-1][y-1]==p2.bishop1)
        {

        }
    else if(board[x-1][y-1]==p2.bishop2)
        {

        }
    else if(board[x-1][y-1]==p2.knight)
    {
         r=p2.wknight(x,y,a,b,board);
        if(r==1)
        {
            goto WRONG;
        }
    }
    else if(board[x-1][y-1]==p2.rook)
    {
      r=p2.wrook(x,y,a,b,board);
      if(r==1)
      {
          goto WRONG;
      }
    }
    else if(board[x-1][y-1]==p2.queen)
    {

    }
    else if(board[x-1][y-1]==p2.king)
    {
        r=p2.wking(x,y,a,b,board);
      if(r==1)
      {
          goto WRONG;
      }
    }
    else
    {
    goto WRONG;
    }
}

if(board[a-1][b-1]==p1.king)
{

    cout<<"PLAYER 1 (WHITE) WINS!";

}
else if(board[a-1][b-1]==p2.king)
{

    cout<<"PLAYER 2 (BLACK) WINS!";

}
else
{
    c++;
    goto NEXT;
}

cout<<"Game over!";

return 0;
}
