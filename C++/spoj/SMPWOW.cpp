#include <iostream>
int main()
{
    int n;
    std::cin>>n;
    std::string s="W";
    for(register int i=1;i<=n;i++)
    {
        s=s+"o";
    }
    s=s+"w";
    std::cout<<s;
    return 0;
}
