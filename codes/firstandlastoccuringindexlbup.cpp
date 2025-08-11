#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> a, int x)
{
    int n= a.size();
    int low=0;
    int high= n-1;
    int ans= -1;
    while(low<= high)
    {
        int mid= low+ (high-low)/2;
        if(a[mid]>=x)
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

int upperbound(vector<int> a, int x)
{
    int n= a.size();
    int low= 0;
    int high= n-1;
    int ans= -1;

    while(low<= high)
    {
        int mid= low+(high-low)/2;
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
pair<int, int> occurence(vector<int> a, int x)
{
    int first= lowerbound(a,x);
    if(first==-1 || a[first]!= x) return {-1,-1};

    return{first, upperbound(a,x)-1};    
}

int main()
{
    vector<int> a={1,1,1,2,2,2,3,3,4,4,5};
    int x= 2;

    pair<int, int> ans= occurence(a,x);
    cout<< ans.first<<" ";
    cout<< ans.second;
    return 0;  
}