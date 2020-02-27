/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
  private:
    A(){cout<<"in class a"<<endl;}
    
   friend class B;
};
class B:virtual A{
 public:
    B(){cout<<"in class B"<<endl;} // class A constructor is accessible here because B is friend for A.
  
};
/*
class C:public B{ // Throws error message since A will become private for class C
  public:
  C(){cout<<"in C"<<endl;}
};
*/
int main()
{
    B b;
   // C c;
    return 0;
}
