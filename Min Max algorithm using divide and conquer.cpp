#include <iostream>
#include<limits.h>
using namespace std;
void minmax(int *a,int l,int h,int *min,int *max);  //  time complexity = log(n)
int main()
{
   int a[6]={-3,2,1,5,4,6};
   int n=6;
   int min=INT_MAX,max=INT_MIN;
   minmax(a,0,n-1,&min,&max);
   cout<<min<<" "<<max;
   return 0;
}
void minmax(int *a,int l,int h,int *min,int *max)
{
    if(l==h)                         //only 1 element
    {
        if(a[l]<*min)
           *min=a[l];
        if(a[h]>*max)
           *max=a[h];
    }
    else if(h-l==1)               //choosing element from two elements
    {
        if(a[l]>a[h])
        {
            if(a[l]>*max)
               *max=a[l];
            if(a[h]<*min)
               *min=a[h];
        }
        else
        {
           if(a[h]>*max)
               *max=a[h];
            if(a[l]<*min)
               *min=a[l];
        }
    }
    else
    {
        int m=(l+h)/2;
        minmax(a,l,m,min,max);
        minmax(a,m+1,h,min,max);
    }
}
