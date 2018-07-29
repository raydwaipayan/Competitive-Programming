#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;
    register int i;
    for(i=0;i<10;i++) lst.push_front(i);

    cout<<"Size = "<<lst.size()<<endl;

    cout<<"Contents"<<endl;
    list<int>::iterator p=lst.begin();
    while(p!=lst.end()) cout<<*(p++)<<" ";

    cout<<"\n\n";

    //change contents of list
    p=lst.begin();
    while(p!=lst.end())
    {
        *p+=100;p++;
    }

    cout<<"Modified Contents"<<endl;
    p=lst.begin();
    while(p!=lst.end()) cout<<*(p++)<<" ";

    cout<<"\n\n";
    //sorting in ascending order
    lst.sort();
    cout<<"Ascending order:"<<endl;
    p=lst.begin();
    while(p!=lst.end()) cout<<*(p++)<<" ";
    cout<<"\n\n";
    return 0;

}
