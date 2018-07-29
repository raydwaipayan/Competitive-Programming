#include <vector>
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	vector<int> v;
	int temp;
	while(true)
	{
		cin>>temp;
		if(temp>42)
			break;
		v.push_back(temp);
	}
	vector<int>::iterator p=v.begin();
	while(p!=v.end()) cout<<*(p++)<<endl;

	return 0;
}
