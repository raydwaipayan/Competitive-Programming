#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool is_isogram(string str) {
  int len=str.length();
  if(len==0)
    return true;
  transform(str.begin(), str.end(),str.begin(), ::tolower);
  sort(str.begin(), str.end());
  int a;
  for(register int i=0;i<len-1;i++)
  {
    a=str[i]^str[i+1];
    if(a==0)
      return false;
  }
  return true;
}
int main(void)
{
    cout<<"Enter a word to check for isogram"<<endl;
    string s;
    cin>>s;
    if(is_isogram(s))
        cout<<s<<" is an isogram"<<endl;
    else
        cout<<s<<" is not an isogram"<<endl;

}
