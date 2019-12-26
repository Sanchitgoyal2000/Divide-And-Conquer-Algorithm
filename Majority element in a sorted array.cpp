#include <iostream>
using namespace std;
int divide(int *a,int ele,int l,int h);

int main()     // here if element is majority then it will always be in middle and we will check its position
{              // in both the halfs .Time taken here is logn
  int t;
  cin>>t;

  while(t-->0)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }

      int pos=divide(a,a[n/2],0,n/2-1);
      int pos1=divide(a,a[n/2],n/2,n-1);

      if(pos1-pos+1>n/2)
      {
          cout<<a[pos]<<"\n";
      }
      else
      {
          cout<<"-1\n";
      }
  }
}


int divide(int *a,int ele,int l,int h)
{
    int pos;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==ele)
        {
            pos=m;
        }
        if(a[m]>=ele)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return pos;
}
