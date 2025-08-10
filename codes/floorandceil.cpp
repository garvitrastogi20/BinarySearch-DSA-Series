// FLOOR: it is the largest number<= x
// CEIL: it is the smallest number>= x


#include<bits/stdc++.h>
using namespace std;

int floor(vector<int>&a, int target)
{
    int ans=-1;
    int low=0;
    int high= a.size()-1;

    while(low<=high)
    {
        int mid= (low+high)/2;
        if(a[mid]<= target)
        {
            ans =a[mid];
            low=mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return ans;
}

int ceil(vector<int>&a, int x)
{
    int low= 0;
    int high= a.size()-1;
    int ans=-1;

    while(low<= high)
    {
        int mid= (low+high)/2;
        if(a[mid]>= x)
        {
            ans= a[mid];
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
    vector<int> a={1,3,5,6};
    int x= 4;

    cout<<"FLOOR:"<<floor(a, x)<<endl;
    cout<<"CEIL: "<<ceil(a,x)<<endl;
}