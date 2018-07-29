#include <iostream>
#include <vector>
using namespace std;
int checkPrime(int);
int main()
{
    int n,n1,n2;
    cin>>n;
    vector<int> v;
    register int i=0;
    for(;i<n;i++)
    {
        cin>>n1>>n2;
        register int j=n1;
        for(;j<=n2;j++)
        {
            if(checkPrime(j))
                v.push_back(j);
        }
        v.push_back(-1);

    }
    vector<int>::iterator p=v.begin();
    while(p!=v.end())
    {
        if (*p==-1)
            cout<<'\n';
        else
            cout<<*p<<endl;
        p++;
    }
}
int checkPrime(int n)
{
    register int j=1,f=0;
    for(;j<=n;j++)
        if(n%j==0)f++;
    return (f==2)?1:0;
}
