// IN THIS WE HAVE TO RETURN A PAIR THAT GIVES FIRST AND LAST OCCURENCE OF A GIVEN NUMBER IN PAIRS
// FOR EXAMPLE: 
// WE HAVE AN ARRAY: {1,1,1,2,2,3,3,3,3,4, 4, 4, 5};
// NOW INDEXES ARE:   0 1 2 3 4 5 6 7 8 9 10 11 12

// GIVEN NUMBER: X=3

// SO THE FIRST OCCURENCE OF 3 IS AT INDEX 5.
// AND THE LAST OCCURENCE IS AT INDEX 8

//SO IT WILL RETURN A PAIR:{5,8}


// GIVEN NUMBER: 6 
// IT WILL RETURN {-1,-1}

// GIVEN NUMBER: 5 
// IT WILL RETURN {12,12}

// BRUTE FORCE APPROACH USING LINEAR SEARCH

#include<bits/stdc++.h>
using namespace std;

pair<int, int> occurences(vector<int>& a, int x)
{
    int n= a.size();
    int first=-1;
    int last=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            {
                if(first==-1)
                {
                    first=i;
                }
            }
            last= i;
        }
    }
    return{first, last};
}

int main()
{
    vector<int>a ={1,1,1,2,2,3,3,3,3,4,4,4,5};
    int x= 3;
    pair<int, int> ans= occurences(a,x);

    cout<<ans.first<<" ";
    cout<<ans.second<<" ";
    return 0;
}
