//Demonstration to a map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> m;
    register int i;
    //put pairs into map

    for(i=0;i<26;i++)
    {
        m.insert(pair<char,int>('A'+i,65+i));
    }

    char ch;
    cout<<"Enter key"<<endl;
    cin>>ch;

    map<char,int>::iterator p;

    p=m.find(ch);
    if(p!=m.end())
        cout<<"Its ASCII value is "<<p->second;
    else
        cout<<"Key is not in map.\n";
    return 0;
}
