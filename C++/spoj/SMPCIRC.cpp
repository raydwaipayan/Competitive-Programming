#include <iostream>
using namespace std;
#include <math.h>
#define abs(a) (a>=0)?a:-a
int check(int x0,int y0, int r0, int x1, int y1, int r1);
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int x0,y0,r0,x1,y1,r1;
        cin>>x0>>y0>>r0>>x1>>y1>>r1;
        switch(check(x0,y0,r0,x1,y1,r1))
        {
            case 1: cout<<"I\n";break;
            case 0: cout<<"E\n";break;
            case -1: cout<<"O\n";break;
        }
    }
    return 0;
}
int check(int x0, int y0, int r0, int x1, int y1, int r1)
{
    double d=pow((pow((x0-x1),2.0)+pow((y0-y1),2.0)),0.5);
    double rd=abs((r0-r1));
    if(rd>d)
        return 1;
    else if((abs((d-rd)))<1e-9)
        return 0;
    else
        return -1;
}
