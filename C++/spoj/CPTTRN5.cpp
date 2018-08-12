#include <iostream>
#include <string>
using namespace std;
void printPattern(int r,int c, int s);

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        printPattern(a,b,c);
    }
    return 0;
}
void printPattern(int r, int c, int s)
{
    string pat1="*";
    string pat2="\\";
    string pat3="/";
    string pat4="\\";
    string pat5="/";
    for(int i=1;i<s;i++)
    {
        pat2=pat2+".";
        pat3=pat3+".";
        pat4="."+pat4;
        pat5="."+pat5;
        pat1=pat1+"*";
    }
    pat1=pat1+"*";
    pat2=pat2+"*";
    pat3=pat3+"*";
    pat4=pat4+"*";
    pat5=pat5+"*";
    bool check1=true,check2=true;
    for(int i=0;i<r;i++)
    {
        cout<<"*";
        for(int k=0;k<c;k++)
            cout<<pat1;
        cout<<"\n";
        for(int k=0;k<s;k++)
        {
            cout<<"*";
            for(int j=0;j<c;j++)
            {
                if(check1)
                {
                    if(check2)
                        cout<<pat2;
                    else
                        cout<<pat5;
                }
                else
                {
                    if(check2)
                        cout<<pat3;
                    else
                        cout<<pat4;
                }
                check2=!check2;
            }

            cout<<"\n";
            check1=(!check1);
        }
        if(s%2!=0)
            check2=!(check2);
        check2=(!check2);

    }
    cout<<"*";
    for(int k=0;k<c;k++)
        cout<<pat1;
    cout<<"\n\n";
}
