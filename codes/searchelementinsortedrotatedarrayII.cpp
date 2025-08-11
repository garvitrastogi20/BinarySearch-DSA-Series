// in this case, the array contains duplicate elements also, so we have to just return true or false


#include<bits/stdc++.h>
using namespace std;

bool searchelement(vector<int>&a, int x)
{
    int low= 0;
    int high= a.size()-1;

    while(low<= high)
    {
        int mid= low+ (high-low)/2;
        if(a[mid]==x) return true;
        if(a[low]==a[mid] && a[mid]==a[high])
        {
            low= low+1;
            high= high-1;
            continue;
        }

        if(a[low]<= a[mid])
        {
            if(a[low]<= x && x<=a[mid])
            {
                high= mid-1;
            }
            else{
                low= mid+1;
            }
        }
        else{
            if(a[mid]<= x && x<= a[high])
            {
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> a={7,8,9,1,1,2,3,3,3,4,5,6};
    int x= 3;

    bool ans= searchelement(a, x);
    if(ans== true)
    {
        cout<<"True"<<" ";
    }
    else{
        cout<<"False";
    }
}