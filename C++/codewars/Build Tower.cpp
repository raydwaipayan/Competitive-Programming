#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Kata
{
public:
    vector<string> towerBuilder(int nFloors)
    {
        vector<string> ret;
        for(register int i=0;i<nFloors;i++)
        {
            ret.push_back(string(nFloors-i-1,' ')+string((i*2)+1,'*')+string(nFloors-i-1,' '));
        }
        return ret;
    }
};
int main()
{
    Kata kata;
    vector<string> v=kata.towerBuilder(10);
    vector<string>::iterator p=v.begin();
    while(p!=v.end())
    {
        cout<<*p<<"\n";
        p++;
    }
}
