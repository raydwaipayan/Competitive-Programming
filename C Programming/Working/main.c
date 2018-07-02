#include <stdio.h>
#include <stdlib.h>
long long calc(int d,int m, int y)
{
    register i,j;
    int mn[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int smn=365;
    int ml[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int sml=366;
    long long sum=d;
    for(i=1;i<y;i++)
    {
        if(i==1752)
        {
            sum-=11;
        }
        if(i%4==0&&i!=1800 && i!=1900)
        {
            sum+=sml;
        }
        else
        {
            sum+=smn;
        }
    }
    for(i=0;i<m;i++)
    {
        if(y%4==0&&y!=1800 && y!=1900)
        {
            sum+=ml[i];
        }
        else
        {
            sum+=mn[i];
        }
    }
    return sum;
}
int main()
{
    printf("Enter dob in DD:MM:YYYY format\n");
    int d,m,y;
    scanf("%d:%d:%d",&d,&m,&y);
    long long sum=calc(d,m-1,y);
    int w=((sum-1)%7)+1;
    switch(w)
    {
        case 1: printf("Saturday");break;
        case 2: printf("Sunday");break;
        case 3: printf("Monday");break;
        case 4: printf("Tuesday");break;
        case 5: printf("Wednesday");break;
        case 6: printf("Thursday");break;
        case 7: printf("Friday");break;
        default: printf("Program error!");
    }
    printf("%d",sum);
    return 0;
}
