/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector<int> Two_sums(vector<int> &num,int target)
{
    vector< pair<int,int> >vec1;
    for(int n=0;n<num.size();n++)
    {
        pair<int,int> temp(num[n],n);
        vec1.push_back(temp);
    }
    sort(vec1.begin(),vec1.end());
    int i=0;
    int j=vec1.size()-1;
    while(i<j)
    {
        if(vec1[i].first+vec1[j].first == target)
        {
            vector<int>vec;
            vec.push_back(vec1[i].second);
            vec.push_back(vec1[j].second);
            cout<<"val"<<vec1[i].second<<","<<vec1[j].second<<endl;
            return vec;
        }
        else if(vec1[i].first+vec1[j].first>target){
            --j;
        }
        else
            ++i;
    }
}
int main()
{
    int a1[5] = {2,5,7,11,15};
    vector<int>a;   
    for(int i=0;i<5;i++)
    {
       a.push_back(a1[i]); 
    }
    //vector<int>a;
    int tar = 12;
    vector<int>res =Two_sums(a,tar);
    cout<<res[0]<<","<<res[1]<<endl;
    return 0;
}
