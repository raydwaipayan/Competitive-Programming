#include <bits/stdc++.h>
using namespace std;

int main()
{    
    char s[200];
    gets(s);
    string ns="";
    for(int i=0;i<(sizeof(s)/sizeof(s[0]));i++)
    {
        char x=s[i];
        if(!isalpha(x))
        {
            ns=ns+x;
            continue;
        }
        if(x=='z')
            x='b';
        else if(x=='y')
            x='a';
        else
            x+=2;
        ns=ns+x;
    }
    cout<<ns;
    return 0;
}