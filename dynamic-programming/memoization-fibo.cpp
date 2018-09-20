#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define NIL -1
int lookup[MAX];

//initialize lookup matrix
void initialize()
{
    for(int i=0;i<MAX;i++)
        lookup[i]=NIL;
}
int fibonacci(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fibonacci(n-1)+fibonacci(n-2);
    }
    return lookup[n];
}
int main()
{
    initialize();
    int n=6; 
    cout<<"Fibonacci at "<<n<<" :: "<<fibonacci(n);
    return 0;
}