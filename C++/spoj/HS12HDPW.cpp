#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
string dectobin(int a)
{
    string s="";
    for(int i=0;i<8;i++)
    {
        char c='0'+(a%2);
        s=c+s;
        a=a/2;
    }
    return s;
}
int bintodec(string s)
{
    int i=0;int r=0;
    for(;i<8;i++)
    {
        char c[1];
        c[0]=s[7-i];
        r=r+(int)pow(2.0,i)*atoi(c);
    }
    return r;
}
vector<int> decodeUtil(string s)
{
    string bin[6];
    for(int i=0;i<6;i++)
    {
        char c=s[i];
        int b=(int)c;
        bin[i]=dectobin(b);
    }
    string b2="";
    string b3="";
    for(int i=0;i<6;i++)
    {
        string temp=bin[i];
        b2=temp[i]+b2;
        b3=temp[(i+3)%6]+b3;
    }
    b2="00"+b2;
    b3="00"+b3;
    vector<int> arr;
    arr.push_back(bintodec(b2));
    arr.push_back(bintodec(b3));
    return arr;
}
string decode(vector<string> v, int s)
{
    string st="";
    string second=v[s];
    for(int i=0;i<s;i++)
    {
        vector<int> a=decodeUtil(v[i]);
        st=st+second[a[0]]+second[a[1]];
    }
    cout<<st;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int s;cin>>s;
        vector<string> v;
        string temp;
        for(int i=0;i<s;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        cin>>temp;
        v.push_back(temp);
        decode(v,s);
    }

}
