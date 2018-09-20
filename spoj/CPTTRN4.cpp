#include <iostream>
using namespace std;
int printPattern(int r,int c, int h, int w);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        printPattern(a,b,c,d);
    }
    return 0;
}
int printPattern(int r,int c, int h, int w)
{
    string pat1="*";
    string pat2="*";
    for(int i=1;i<=w;i++)
    {
        pat1="*"+pat1;
        pat2="."+pat2;
    }
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
        for(int k=0;k<=h;k++)
        {
            cout<<"*";
            if(k<h)
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
