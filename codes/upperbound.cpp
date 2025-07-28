#include<bits/stdc++.h>
using namespace std;

int upperbound(vector<int> a, int n, int x)
{
    int ans= n;
    int low=0;
    int high= n-1;
    while(low<= high)
    {
        int mid=(low+high)/2;
        if(a[mid]>x)
        {
            ans= mid;
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a={3,5,7,11,15};
    int n= a.size();
    int x=7;
    int ans= upperbound(a,n,x);
    cout<<ans<<" ";
    return 0;
}