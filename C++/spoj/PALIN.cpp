#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;
bool checkPalin(long long a)
{
    ostringstream str1;
    str1<<a;
    string num1=str1.str();
    int s=num1.size();
    register int i=0,j=s-1;
    while(i<=j){
        if(num1[i++]!=num1[j--])
            return false;
    }
    return true;
}
long long findPalin(long long a)
{
	for (long long i = a +1;; i++)
	{
	    if(i<10&&i>=0)
            return i;
        if(i<0)
            continue;
	    int b=log10(i);
	    int c=(long long)pow(10.0,b);
	    if((i%10)!=(i/c))
            continue;
		if (checkPalin(i))
			return i;
	}
}
int main(void)
{
    ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (register int i = 0; i < n; i++)
	{
		long long a;
		cin>>a;
		cout << findPalin(a) << "\n";
	}
	return 0;
}
