#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef unordered_map<int,int> UMII;

//function to print top k numebrs
void kTop(int a[], int n, int k)
{
    VI top(k+1);
    //the map will store frequency of the elements
    UMII freq;
    //iterate till the end of the stream
    for(int m=0;m<n;m++)
    {
        //increase the frequency of that element
        freq[a[m]]++;

        top[k]=a[m];
        //iterate through the top vector to find other occurences of a[m] and if yes to increase their freequency and sort accordingly

        for(auto it=find(top.begin(), top.end(),a[m]);it!=top.begin();it--)
        {
            if(freq[*it]>freq[*(it-1)])
                swap(*it, *(it-1));
            else if(freq[*it]==freq[*(it-1)]&& *it<*(it-1))
                swap(*it,*(it-1));
            else
                break;
        }
        //print the top k elements
        for(auto it=top.begin();it!=top.end()-1&&*it!=0;it++)
            cout<<*it<<" ";
    }
    cout<<"\n";
}
int main()
{
    int k=4;
    int arr[]={5,2,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    kTop(arr,n,k);
    return 0;
}