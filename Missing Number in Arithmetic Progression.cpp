#include <iostream>
using namespace std;
int diff1(int *a,int l,int h,int diff);
int main()                               //first and last number never missing
{
    int n=4;
    int a[4]={2,4,8,10};
    int diff=(a[n-1]-a[0])/n;             //from an=a+(n-1)d
    cout<<diff1(a,0,n,diff);
    return 0;
}
int diff1(int *a,int l,int h,int diff)
{
   int m=(l+h)/2;
   if(m>0&&a[m]-diff!=a[m-1])
   {
       return a[m]-diff;
   }
   else if(a[m]+diff!=a[m+1])
   {
       return a[m]+diff;
   }
   else if(a[m]==(a[0]+(diff*m)))      //to find nth term So an=a+(n-1)d
   {
       return diff1(a,m+1,h,diff);
   }
   else
   return diff1(a,l,m-1,diff);
}
