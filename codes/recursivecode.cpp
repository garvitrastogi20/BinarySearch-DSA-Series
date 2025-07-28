#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> a, int low, int high, int target)
{
    if(low>high) return -1;
    int mid = low + (high - low) / 2;
    if(a[mid]== target) return mid;
    else if(target>a[mid]) return binarysearch(a,mid+1, high, target);
    return binarysearch(a, low, mid-1, target);
    
}

int main()
{
    vector<int> a={1,3,5,6,7,8,9};
    int n= a.size();
    int target=6;
    int index= binarysearch(a,0,n-1,target);
    cout<<"Index at which element is present: "<<index<<" ";
    return 0;
}

// time complexity: O(log n)