// LOWER BOUND 

// Lower bound is the smallest index such that arr[index]>=x
// arr[]={3,5,8,15,19} n=5
//        0 1 2  3  4  
// x=8  lower bound=2 8>=8
// x=9  lower bound =3 15>=9
// x=16 lower bound= 4
// x=20 lower bound= 5

#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> a, int n, int x)
{
    int low=0, high=n-1;
    int ans=n;
    while(low<= high)
    {
        int mid=(low+high)/2;
        if(a[mid]>= x)
        {
            ans=mid;
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
    vector<int> a={3,5,8,15,19};
    int n= a.size();
    int x= 8;
    int ans= lowerbound(a,n,x);
    cout<<ans;
    return 0;
}

// there is a STL command also for the same:
//lower_bound(a.begin(), a.end(), target);
// a.begin()-> starting of the search space
// a.end()-> ending of the search space
// x-> target