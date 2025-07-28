// BINARY SEARCH
// it is a searching algorithm in a limited search space.
// it is only applicable in a search in a sorted area.

// ITERATIVE IMPLEMENTATION OF BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> a, int n, int target)
{
    int low= 0, high= n-1;
    int mid= (low+ high)/2;

    while(low<= high)
    {
        if(a[mid]==target) return mid;
        else if(target>a[mid]) low= mid+1;
        else{
            high= mid-1;
        }
    }
    return -1;

}

int main()
{
    vector<int> a={1,3,5,6,7,8,9};
    int n= a.size();
    int target= 6;
    int index= binarysearch(a, n, target);
    cout<<"Index at which targer is present is: "<< index<<" ";
    return 0;
}


// time complexity: O(log n)