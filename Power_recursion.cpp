/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int Power_recursion(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2 ==0)
        return Power_recursion(m*m,n/2);
    else
        return m*Power_recursion(m*m,(n-1)/2);
}
int main()
{
    cout<<"power 2,9 is"<<Power_recursion(2,9)<<endl;

    return 0;
}
