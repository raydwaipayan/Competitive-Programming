#include <stdio.h>
#include <time.h>
int main(void)
{
    int y,m,d;
    int ml[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter your birth date in DD:MM:YYYY format: ");
    scanf("%d:%d:%d",&d,&m,&y);
    //Fetching current date
    time_t t=time(NULL);
    struct tm tm=*localtime(&t);
    int cy,cm,cd;
    cy=tm.tm_year+1900;
    cm=tm.tm_mon+1;
    cd=tm.tm_mday;
    int ay,am,ad;
    ay=cy-y;am=cm-m;ad=cd-d;
    if(ad<0)
    {
        ad=ml[cm-2]-d +cd;
        am--;
    }
    if(am<0)
    {
        am=12+am;
        ay--;
    }
    printf("Your age is %d years %d months %d days",ay,am,ad);
}
