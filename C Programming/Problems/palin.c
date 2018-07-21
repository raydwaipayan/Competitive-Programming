#include <stdio.h>
#define MAX 30
int main(void)
{
    puts("Enter a word");
    char* s=(char*)malloc(MAX*sizeof(char));
    gets(s);
    register int len=-1;
    while(*(s+(++len))!='\0');
    if(check(s,len))
        puts("Palindrome");
    else
        puts("Not palindrome");
}
int check(char* s,int len)
{
    register int ls=0,le=len/2 -1,re=len-1;
    if(len==1)
        return 1;
    while(ls<=le)
    {
        if(*(s+(ls++))^*(s+(re--)))
            return 0;
    }
    return 1;
}
