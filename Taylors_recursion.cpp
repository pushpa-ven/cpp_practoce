/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

double e(double x,double n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    cout<<e(4,10)<<endl;

    return 0;
}
