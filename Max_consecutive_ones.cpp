/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int Max_consecutive_ones(vector<int> &nums)
{
    int Max_l =0;
    int i=0;
    int n = nums.size();
    while(i<n)
    {
        if(nums[i] != 1)
            i++;
        else
        {
         int count =1;
         int r= i+1;
         while(r<n && nums[r]==1)
         {
             count++;
             r++;
         }
         i=r;
         cout<<"i is "<<i<<endl;
         Max_l = max(Max_l,count);
         
        
        }
    }
    return Max_l;
}
int main()
{
    vector<int>vec;
    int a[6] ={1,1,1,1,0,1};
    for(int i=0;i<6;i++)
    {
        vec.push_back(a[i]);
    }
    cout<<"max len "<<Max_consecutive_ones(vec)<<endl;

    return 0;
}
