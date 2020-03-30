/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
double e_iterative(int x,int n){
    double s=1;
    for(;n>0;n--)
    {
        s=1+x*s/n;
    }
    return s;
}
double e_rec(int x,int n)
{
    static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e_rec(x,n-1);
}
int main()
{
    cout<<"iterative (1,10)"<<e_iterative(1,10)<<endl;
    cout<<"recursion (1,10)"<<e_rec(1,10)<<endl;

    return 0;
}
