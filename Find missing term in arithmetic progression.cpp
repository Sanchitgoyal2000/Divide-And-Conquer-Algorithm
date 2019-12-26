#include <iostream>
using namespace std;
int fun(int *a,int diff,int l,int h);
int main()
{
    int n=6;
    int a[6]={2,4,6,8,10,14};
    int diff=(a[n-1]-a[0])/(n);       //as there are n terms so n+1 terms as one term is missing  n+1-1 =n
    cout<<fun(a,diff,0,n);
}

int fun(int *a,int diff,int l,int h)
{
    int m=(l+h)/2;
    if(m>0&&a[m]-a[m-1]!=diff)
    {
        return a[m]-diff;
    }
    if(a[m+1]-a[m]!=diff)
    {
        return a[m]+diff;
    }
    if(a[m]==a[0]+m*diff)
    {
        return fun(a,diff,m+1,h);
    }
    else
    {
        return fun(a,diff,l,m-1);
    }
}
