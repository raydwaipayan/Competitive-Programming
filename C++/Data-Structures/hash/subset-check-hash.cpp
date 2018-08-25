#include <bits/stdc++.h>
using namespace std;

typedef unordered_set<int> USI;

bool isSubset(int arr1[], int arr2[], int m, int n)
{
    USI set;
    for(int i=0;i<m;i++)
        if(set.find(arr1[i])==-1)
            set.insert(arr1[i]);
    for(int i=0;i<n;i++)
        if(set.find(arr2[i])==-1)
            return false;
    return true;
}
int main()
{
    int arr1[]={11,1,13,21,3,7};
    int arr2[]={11,3,7,1};

    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    if(isSubset(arr1,arr2, m,n))
        cout<<"arr2 is a subset of arr1";
    else
        cout<<"arr2 is not a subset of arr1";
}
    
