/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.


Sort_reverse

*******************************************************************************/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Compare{
    public:
    bool operator()(const int& lhs,const int& rhs)
    {
        
        return lhs>rhs; 
    }
};

int main()
{
    vector<int>vec1;
    vector<int>::iterator itr;
    
    for(int i=0;i<10;i++)
    {
        vec1.push_back(i);
    }
    
    for(itr=vec1.begin();itr != vec1.end();itr++)
    {
        cout<<*itr<<" ";
    }    
    cout<<endl;
    sort(vec1.begin(),vec1.end(),Compare());
    for(itr=vec1.begin();itr!=vec1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;
}
