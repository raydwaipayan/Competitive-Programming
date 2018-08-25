#include <bits/stdc++.h>
using namespace std;

typedef unordered_map<int,int> UMII;

int mostFreq(int arr[], int n)
{
    UMII hash;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    //find max frequency
    int max_count=0,res=-1;
    for(auto i: hash)
    {
        if(i.second>max_count)
        {
            max_count=i.second;
            res=i.first;
        }
    }
    return res;
}
int main()
{
    int arr[]={1,5,2,1,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<mostFreq(arr,n);
    return 0;
}