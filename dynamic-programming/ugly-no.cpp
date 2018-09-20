#include <bits/stdc++.h>
using namespace std;

typedef unsigned int UI;

UI getUgly(UI n)
{
    UI ugly[n];
    UI next2=2;
    UI next3=3;
    UI next5=5;

    UI i2=0,i3=0,i5=0;
    ugly[0]=1;
    UI nextUgly=1;
    for(int i=1;i<n;i++)
    {
        nextUgly=min(next2, min(next3,next5));
        ugly[i]=nextUgly;
        if(nextUgly==next2)
        {
            i2++;
            next2=ugly[i2]*2;
        }
        if(nextUgly==next3)
         {
             i3++;
             next3=ugly[i3]*3;
         }
        if(nextUgly==next5)
          {
              i5++;
              next5=ugly[i5]*5;
          }
    }
    return nextUgly;
}
int main()
{
    int  n=150;
    cout<<getUgly(n);
    return 0;
}