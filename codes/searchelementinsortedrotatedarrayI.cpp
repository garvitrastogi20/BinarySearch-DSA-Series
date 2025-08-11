// sorted array contains only unique elements

#include<bits/stdc++.h>
using namespace std;

int searchindex(vector<int> a, int x)
{
    int low= 0;
    int high= a.size()-1;

    while(low<= high)
    {
        int mid= low+ (high-low)/2;
        if(a[mid]==x) return mid;
        // check if left part is sorted or not
        if(a[low]<= a[mid])
        {
            if(a[low]<=x && x<= a[mid])
            {
                high= mid-1;
            }
            else{
                low= mid+1;
            }
        }

        else{
            if(a[mid]<=x && x<=a[high])
            {
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> a={7,8,9,1,2,3,4,5,6};
    int x= 9;
    int ans= searchindex(a,x);
    cout<<ans<<" ";
    return 0;
}