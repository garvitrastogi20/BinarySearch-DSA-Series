#include<bits/stdc++.h>
using namespace std;

int insertionposition(vector<int>&a, int target)
{
    int low= 0;
    int high= a.size()-1;
    while(low<= high)
    {
        int mid= low+(high-low)/2;
        if(a[mid]== target)
        {
            return mid;
        }
        else if(target> a[mid]){
            low= mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return low;
}

int main()
{
    vector<int> a={1,3,5,9,10};
    int target= 4;

    int ans= insertionposition(a, target);
    cout<< ans;
    return 0;
}