#include <stdio.h>
#include <string.h>
char *a;
int len;
int main()
{
    puts("Enter a string");
    a=(char*)malloc(100*sizeof(char));
    gets(a);
    len=strlen(a);
    register int i;
    int count=0;char *c=(char*)malloc(40*sizeof(char));int c2=0;
    int * freq=(int*)malloc(100*sizeof(int));
    char trigram[100][40];
    int cf=0;int first=0;
    for(i=0;i<len;i++)
    {
        if(a[i]==' '|| a[i]=='.')
        {
            c[c2++]=' ';
            count++;
            if(count==1)
                first=i;
            if(count==3)
            {
                c[c2]='\0';
                freq[cf]=findfreq(c);
                strcpy(trigram[cf++],c);
                count=0;
                if(i==len-2)
                    break;
                i=first;
                free(c);c2=0;

                c=(char*)malloc(40*sizeof(char));
            }
        }
        else{
            c[c2++]=a[i];
        }

    }
    int max=0,point=0;
    for(register int i=0;i<cf;i++)
    {
        if(freq[i]>max){
            max=freq[i];
            point=i;}
    }
    printf("Maximum freq. of trigram is: %d\n",max);
    printf("The trigram is: %s",trigram[point]);
    return 0;

}
int findfreq(char *b)
{
    int freq=0;int count=0;
    int first=0;
    char *c=(char*)malloc(40*sizeof(char));int c2=0;
    for(register int i=0;i<=len;i++)
    {
        if(a[i]==' '|| a[i]=='.')
        {
            c[c2++]=' ';
            count++;
            if(count==1)
                first=i;
            if(count==3)
            {
                c[c2]='\0';
                if(strcmp(c,b)==0)
                    freq++;
                count=0;
                if(i==len-2)
                    break;
                i=first;
                free(c);c2=0;
                c=(char*)malloc(40*sizeof(char));
            }
        }
        else
        {
            c[c2++]=a[i];
        }

    }
    return freq;
}
