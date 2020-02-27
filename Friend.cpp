/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
  private:
    int a;
  public:
    A(){a=0;}
    
   friend class B;
};
class B{
    private:
    int b;
    
 public:
  void Show(A &x)
  {
      cout<<"a is "<<x.a<<endl;
  }
};
int main()
{
    A a1;
    B b;
    b.Show(a1);
   // cout<<"Hello World";

    return 0;
}
