#include <stdio.h>
#include <string.h>
int main()
{
    puts("Enter a string");
    char *a;
    gets(a);
    int len=strlen(a);
    register int i;
    int count=0;char *c;int c2=0;
    int * freq;int cf=0;int first=0;
    for(i=0;i<len;i++)
    {
        if(a[i]==' '|| a[i]=='.')
        {
            count++;
            if(count==1)
                first=i;
            if(count==3)
            {
                freq[cf++]=findfreq(c,c2);
                count=0;
                if(i==len-1)
                    break;
                i=first;
                *c="";c2=0;
            }
        }
        else{
            c[c2++]=a[i];
        }

    }
    int max=0;
    for(register int i=0;i<cf;i++)
    {
        if(freq[i]>max)
            max=freq[i];
    }
    printf("Maximum freq. of trigram is %d",max);

}
int findfreq(char *a,int len)
{
    int freq=0;int count=0;
    int first=0;
    char *c;int c2=0;
    for(register int i=0;i<len;i++)
    {
        if(a[i]==' '|| a[i]=='.')
        {
            count++;
            if(count==1)
                first=i;
            if(count==3)
            {
                if(strcmp(a,c)==0)
                    freq++;
                count=0;
                if(i==len-1)
                    break;
                i=first;
                *c="";c2=0;
            }
        }
        else
        {
            c[c2++]=a[i];
        }

    }
    return freq;
}
