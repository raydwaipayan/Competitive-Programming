#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
class ABBADiv1
{
    private:
        bool can=false;
        bool possible(string,string);
    public:
        string canObtain(string,string);
};
bool ABBADiv1::possible(string initial, string target)
{
    if(initial.length()==target.length())
    {
        can=can || (initial==target);
        return can;
    }
    string planA, planB;
    planA=initial+"A";
    planB=initial+"B";
    reverse(planB.begin(), planB.end());
    return possible(planA,target);
    return possible(planB,target);
}
string ABBADiv1::canObtain(string initial, string target)
{
    if(possible(initial,target))
        return "Possible";
    else
        return "Impossible";
}
int main(void)
{
    ABBADiv1 obj;
    cout<<obj.canObtain("A","ABBA")<<endl;
}
