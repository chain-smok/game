#include <bits/stdc++.h>
using namespace std;
class BALL{
   public:
      int x,y;
      string color;
      int speedx,speedy;
   BALL(int px=100,int py=200,string col="WHITE",int sx=1,int sy=1){
           x=px;
           y=py;
           color=col;
           speedx=sx;
           speedy=sy;   
   }//instantiation
   string get_color(){
     return color;
   }
   void move(){
      x=x+speedx;
      y=y+speedy;
   }
   void show(){
      cout<<"x="<<x<<endl;
      cout<<"y="<<y<<endl;
      cout<<"color="<<color<<endl;
      cout<<"speedx="<<speedx<<endl;
      cout<<"speedy="<<speedy<<endl;
   }
};

int main()
{
  BALL b1;
  BALL b2(100,200,"RED",1,2);
  b1.show();
  b2.show();
  b1.move();
  b1.show();
  cout<<b2.get_color()<<endl;
}