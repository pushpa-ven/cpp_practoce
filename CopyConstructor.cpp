/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Point{
  private:
  int a,b;
  public:
  Point(int x1,int y1){a=x1;b=y1;}
  Point(const Point &p){a=p.a;b=p.b;}
  
  int geta(){return a;}
  int getb(){return b;}
  
};

int main()
{
    Point p1(5,10);
    Point p2=p1;
    cout<<"p2.x,p2.y "<<p2.a<<" "<<p2.b<<endl;

    return 0;
}
