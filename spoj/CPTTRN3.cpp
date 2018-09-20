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
    string pat1="***";
    string pat2="..*";
    for(int i=0;i<r;i++)
    {
        if(i==0)
        {
            cout<<"*";
            for(int j=0;j<c;j++)
            {
                cout<<pat1;
            }
            cout<<"\n";
        }
        for(int k=0;k<3;k++)
        {
            cout<<"*";
            if(k<2)
            {
                for(int j=0;j<c;j++)
                    cout<<pat2;
            }
            else
                for(int j=0;j<c;j++)
                    cout<<pat1;
            cout<<"\n";
        }
    }
}
