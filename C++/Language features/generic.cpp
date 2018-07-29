//Function template example
#include <iostream>
using namespace std;

//this is a function template

template <class X> void swapargs(X &a, X &b){
    //X is a generic type that is used as a placeholder
    X temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{

int i=10, j=20;
double x=10.1, y=23.3;
char a='x', b='z';

cout<<"Original i,j: "<<i<<' '<<j<<'\n';
cout<<"Original x,y: "<<x<<' '<<y<<'\n';
cout<<"Original a,b: "<<a<<' '<<b<<'\n';

swapargs(i,j);
swapargs(x,y);
swapargs(a,b);

cout<<"Swapped i,j: "<<i<<' '<<j<<'\n';
cout<<"Swapped x,y: "<<x<<' '<<y<<'\n';
cout<<"Swapped a,b: "<<a<<' '<<b<<'\n';

return 0;
}
