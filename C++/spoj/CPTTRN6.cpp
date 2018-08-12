#include <iostream>
#include <string>
using namespace std;

int pattern(int r, int c, int h, int w)
{
    string pat1=".";
    string pat2="-";
    for(int i=1;i<w;i++)
    {
        pat1=pat1+".";
        pat2=pat2+"-";
    }
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<h;j++)
        {
            for(int k=0;k<=c;k++)
            {
               cout<<pat1;
               if(k!=c)
                    cout<<"|";
               else
                    cout<<"\n";
            }
        }
        if(i!=r){
        for(int k=0;k<=c;k++)
        {
            cout<<pat2;
            if(k!=c)
                cout<<"+";
            else
                cout<<"\n";
        }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a ,b,c,d;
        cin>>a>>b>>c>>d;
        pattern(a,b,c,d);
        cout<<"\n";
    }
    return 0;
}
