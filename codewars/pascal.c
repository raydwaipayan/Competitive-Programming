#include <math.h>
#include <stdio.h>
int main(void)
{
    puts("Enter the no. of lines you want to display");
    int len;scanf("%d",&len);
    int b=2*len;
    if(len==0)return;
    for(register int i=1;i<=len;i++)
    {
        for(register int j=0;j<b;j++)
        {
            printf(" ");
        }
        b=b-2;
        int c = 1;
        for (register int j = 1; j <= i; j++)
        {
             printf("%3d ", c);
             c = c * (i - j) / j;
        }
        printf("\n");
    }
}
