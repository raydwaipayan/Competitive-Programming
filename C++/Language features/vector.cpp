#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{

    vector<char> v(10); //create a vector of length 10
    register int i;

    //display original size of v
    cout<<"Size ="<<v.size()<<endl;

    //assign the elements of the vectors some valyes
    for(i=0;i<10; i++) v[i]=i+'a';

    //display contents of vector
    cout<<"Current contents"<<endl;
    for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n\n";

    cout<<"Expanding vector\n";
    /*Vector grows as more values are added to the end of the vector*/
    for(i=0;i<10;i++) v.push_back(i+10+'a');

    //display current size of v
    cout<<"Size now= "<<v.size()<<endl;

    //display contents of vector
    cout<<"Current contents:\n";
    for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n\n";

    //change contents of vectors
    for(i=0;i<v.size();i++) v[i]=toupper(v[i]);
    cout<<"Modified contents: \n";

    //using iterator
    vector<char>::iterator p;
    p=v.begin();
    while(p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    return 0;
}
