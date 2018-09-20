#include <iostream>
using namespace std;
#define square(a) a*a
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(register int i=a;i<=b;i++)
    {
        sum+=square(i);
    }
    cout<<sum;
    return 0;
}

