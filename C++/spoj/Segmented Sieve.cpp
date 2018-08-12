#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void simpleSieve(int limit, vector<int> &prime)
{
    bool mark[limit+1];
    memset(mark,true,sizeof(mark));

    for(int p=2;p*p<limit;p++)
    {
        if(mark[p]==true)
        {
            for(int i=p*2;i<limit;i+=p)
                mark[i]=false;
        }
    }
    for(int p=2;p<limit;p++)
        if(mark[p]==true)
            prime.push_back(p);
}
void segmentedSieve(int limit, vector<int> &prime_all)
{
    vector<int>prime;
    int inisize=sqrt(limit);
    simpleSieve(inisize,prime);
    copy(prime.begin(), prime.end(), back_inserter(prime_all));
    int low=inisize;int high=low*2;

    while(low<limit)
    {
        if(high>limit)
            high=limit;
        bool mark[high-low+1];
        memset(mark, true, sizeof(mark));

        for(int p=2;p<prime.size();p++)
        {
            int lolow=ceil(low/prime[p])*prime[p];

            for(int i=lolow;i<high;i+=prime[p])
            {
                mark[i-low]=false;
            }
        }
        for(int p=low;p<high;p++)
            if(mark[p-low])
                prime_all.push_back(p);
        low=high;
        high+=inisize;
    }

}
int main(void)
{
    vector<int> prime_all;
    segmentedSieve((int)pow(10,4.5), prime_all);

    int n, n1, n2;
    cin>>n;
    for(register int i=0;i<n;i++)
    {
        cin>>n1>>n2;

        for(register int j=n1;j<=n2;j++)
        {
            if(j==2)
                cout<<j<<endl;
            if(j%2==0)
                continue;
            if(binary_search(prime_all.begin(), prime_all.end(), j))
               cout<<j<<endl;
        }
        cout<<endl;
    }
    return 0;

}
