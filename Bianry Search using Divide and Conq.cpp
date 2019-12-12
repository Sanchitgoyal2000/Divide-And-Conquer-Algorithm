#include <iostream>
using namespace std;
int binary(int *a,int s,int l,int k);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<binary(a,0,n,k)<<"\n";
	}
	return 0;
}
int binary(int *a,int s,int l,int k)
{
    if(s>l)                           //Necessary Condition else infinite loop

    {
      return -1;
    }
    int m=(s+l)/2;
    if(a[m]==k)
    {
      return 1;
    }
    if(a[m]<k)
    {
        return binary(a,m+1,l,k);
    }
    else
    {
        return binary(a,s,m-1,k);
    }
    return -1;
}
