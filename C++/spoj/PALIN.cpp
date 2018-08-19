#include <bits/stdc++.h>

using namespace std;
/*
#define UB upper_bound
#define LB lower_bound
#define BS binary_search
#define MP make_pair
#define EB emplace_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define F first
#define S second
#define ALL(a) (a).begin(),(a).end()

typedef long int int32;
typedef unsigned long int uint32;
typedef pair<int32,int32> PII32;
typedef vector<int32> VI32;
typedef vector<PII32> VII32;
typedef pair<int,int> PII;
typedef long long int int64;
typedef unsigned long long int uint64;
typedef pair<int64,int64> PII64;
typedef vector<int64> VI64;
typedef vector<PII64> VII64;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
*/

bool checkp(string s)
{
    int i=0,j=s.length()-1;
    while(i<j)if(s[i++]!=s[j--])return false;
    return true;
}
bool checkAll9(string s)
{
    int i=0,j=s.length()-1;
    while(i<=j)if(s[i++]!='9')return false;
    return true;
}
void printAll9(string s)
{
    int i=0,j=s.length()-1;
    cout<<"1";
    while((i++)<j)cout<<"0";
    cout<<"1";
    cout<<"\n";
}
void mirror(string &s)
{
    int len=s.length();
    if(len&1)
    {
        int i=(len/2)-1;
        int j=i+2;
        while(i>=0) s[j++]=s[i--];

    }
    else
    {
        int i=len/2-1;
        int j=i+1;
        while(i>=0) s[j++]=s[i--];
    }
}
void centreIncrement(string &s)
{
    int len=s.length();
    if(len&1)
    {
        int i=len/2, j=1;
        if(s[i]=='9')
        {
            s[i]='0';
            while(s[i-j]=='9')
            {
                s[i-j]='0';
                s[i+j]=s[i-j];
                j++;
            }
            ++s[i-j];
            s[i+j]=s[i-j];
        }
        else
        {
            s[i]++;
        }
    }
    else
    {
        int i=len/2-1;
        int j=i+1;
        if(s[i]=='9')
        {
            s[i]='0';s[j]=s[i];j++;
            while(s[--i]=='9')
            {
                s[i]='0';s[j]='0';
                j++;
            }
            s[i]++;
            s[j]=s[i];
        }
        else
        {
            s[i]++;
            s[j]=s[i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        if(checkAll9(s)){
            printAll9(s); continue;}
        if(checkp(s))
        {
            centreIncrement(s);
            cout<<s<<"\n";
        }
        else
        {
            string original=s;
            mirror(s);
            while(original.compare(s)>0)
                centreIncrement(s);
            cout<<s<<"\n";
        }

    }
    return 0;

}
