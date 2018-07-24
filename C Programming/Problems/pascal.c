#include <math.h>
#include <stdio.h>
int main(void)
{
    puts("Enter the no. of lines you want to display");
    int len;scanf("%d",&len);
    int b=4*len;
    if(len==0)return;
    for(register int i=0;i<len;i++)
    {
        for(register int j=0;j<b;j++)
        {
            printf(" ");
        }
        b-=2;
        int p=(int)pow(11,i);
        while(p>0)
        {
            int l=(int)log10(p);
            int d=p/((int)pow(10,l));
            printf("%4d",d);
            p=p-d*pow(10,l);
        }
        printf("\n");
    }
}
