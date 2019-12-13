class Solution {
public:
    int findPeakElement(vector<int>& nums) // where ever accessing m-1 put condition m>0 as a[-1] will
    {                                      // give error
        if(nums.size()==1)
            return 0;
       return divide(nums,0,nums.size(),nums.size()) ;
    }
int divide(vector<int>a,int l,int h,int n)   //testcase 1 9 3 4 5 6 7 8 here ans can be 9 or 8 both
{
    int m=(l+h)/2;

    if(m==0&&a[m]>a[m+1])          //time compl = logn
    {
        return m;
    }
    else if(m==n-1&&a[m]>a[m-1])
    {
        return m;
    }
    else if(m>0&&a[m]>a[m-1]&&a[m]>a[m+1])
    {
        return m;
    }
   else if(m>0&&a[m-1]>a[m])
   {
     return divide(a,l,m-1,n);
   }
   else if(a[m+1]>a[m])
   {
     return divide(a,m+1,h,n);
   }
    return 0;
}
};
