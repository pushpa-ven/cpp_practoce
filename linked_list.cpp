/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct Node{
    int data;
    struct Node* next;
}*first =NULL;

void createList(int A[],int n)
{
  struct Node* t = NULL;
  struct Node* last = NULL;
  first = new Node();
  first->data = A[0];
  first->next = NULL;
  last = first;
  for(int i=1;i<n;i++)
  {
      t = new Node();  
      t->data = A[i];
      t->next = NULL;
      last->next=t;
      last =t;
  }
}
void Display(struct Node *p)
{
    while(p!= NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int Count_list(struct Node* p)
{
    int count =0;
    while(p!= NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
int Count_recursion(struct Node* p)
{
    if(p)
    {
        return Count_recursion(p->next)+1;
    }
    else
    {
        return 0;
    }
}
void Display_recursion(struct Node* p)
{
    if(p != NULL)
    {
        cout<<p->data<<endl;
        Display_recursion(p->next);
    }
}
void Display_recursion_reverse(struct Node* p)
{
    if(p!=NULL)
    {
        Display_recursion_reverse(p->next);
        cout<<p->data<<endl;
    }
}

int Add_list(struct Node* p)
{
    int sum=0;
    while(p)
    {
        sum = sum+p->data;
        p=p->next;
    }
    return sum;
}
int Add_recursion(struct Node* p)
{
    if(p)
    {
        return Add_recursion(p->next)+p->data; 
    }
    else
    {
       return 0;
    }
}
int Max_elem(Node* p)
{
    int max = INT32_MIN;
    if(p==0)
        return INT32_MIN;
    while(p)
    {
        if(max<p->data)
            max=p->data;
        p=p->next;    
    }
    return max;
}
int Max_elem_rec(Node* p)
{
    int x=0;
    if(p==0)
        return INT32_MIN;
    x=Max_elem_rec(p->next);
    return x>p->data?x:p->data;
}
int main()
{
 int n =5;
 int A[5]={3,2,1,4,3};
 createList(A,n);
 cout<<"max is"<<Max_elem(first)<<endl;
 cout<<"max using rec"<<Max_elem(first)<<endl;
 /*
 Display(first);
 Display_recursion(first);
 cout<<"value is "<<Count_list(first)<<endl;
 cout<<"recursion count is"<<Count_recursion(first)<<endl;
 cout<<"Sum of nodes"<<Add_list(first)<<endl;
 cout<<"Sum of nodes recursion"<<Add_recursion(first)<<endl;
 Display_recursion_reverse(first);
*/
 return 0;
}



