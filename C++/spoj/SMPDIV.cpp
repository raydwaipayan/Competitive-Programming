#include <iostream>
using namespace std;
int printSol(int n,int x,int y);
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        printSol(n,x,y);
    }
    return 0;
}
int printSol(int n,int x, int y)
{
    register int i;
    for(i=1;i<n;i++)
    {
        if(i%x==0 &&i%y!=0)
            cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
