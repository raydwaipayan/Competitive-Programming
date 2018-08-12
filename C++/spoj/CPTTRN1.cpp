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
    bool alt=true;
    for(int i=0;i<r;i++)
    {
        alt=i%2==0;
        for(int j=0;j<c;j++)
        {
            if(alt)
            {
                if(j%2==0)
                    cout<<"*";
                else
                    cout<<".";
            }
            else
            {
                if(j%2==0)
                    cout<<".";
                else
                    cout<<"*";
            }
        }
        cout<<"\n";
    }
}
