#include <iostream>
using namespace std;
int printPattern(int r,int c);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        printPattern(a,b);
    }
    return 0;
}
int printPattern(int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || j==0||i==r-1||j==c-1)
                cout<<"*";
            else
                cout<<".";
        }
        cout<<"\n";
    }
}
