#include <bits/stdc++.h>
typedef long long int int64;
using namespace std;
void simpleSieve(int64 limit, vector<int64> &prime, int64 m)
{
    bool mark[limit+1];
    memset(mark,true, sizeof(mark));
    for(int64 p=2;p*p<=limit;p++)
    {
        if(mark[p])
        {
            for(int64 i=p*2;i<limit;i+=p)
                mark[i]=false;//unmark all multiples of prime
        }
    }
    for(int64 p=2;p<=limit;p++)
    {
        if(mark[p])
        {
            prime.push_back(p);
            if(p>=m)
                cout<<p<<"\n";//print all those primes greater than m
        }
    }
}
void segmentedSieve(int64 n, int64 m)
{
    int64 limit=floor(sqrt(n))+1;
    vector<int64> prime;
    simpleSieve(limit,prime,m);
    int64 low;
    int64 high;
    //optimization by skipping low to the max of limit and m
    low=max(limit+1,m);
    high=n;

    bool mark[n-m+1];
    memset(mark,true,sizeof(mark));

    for(int64 i=0;i<prime.size();i++)
    {
        int loLim=floor(low/prime[i])*prime[i];
        if(loLim<low)
            loLim+=prime[i];
        for(int64 j=loLim;j<=high;j+=prime[i])
            mark[j-low]=false;
    }
    for(int64 i=low;i<=high;i++)
    {
        if(mark[i-low])
            cout<<i<<"\n";
    }
}
int main()
{
    int64 n,m,t;
    cin>>t;

    while(t--)
    {
        cin>>m>>n;
        segmentedSieve(n,m);
    }
    return 0;
}
