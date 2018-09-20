#include <stdio.h>
#define MAX 100
int *p[MAX];
int top=0;

int main()
{
    push(5);push(2);
    printf("%d",pop());
}
void push(int i)
{
    if(top>=MAX)
    {
        printf("Stack full!");
        return;
    }
    p[top++]=i;
}
 int pop(void)
 {
     if(top==0)
     {
         printf("Stack Empty");
         return;
     }
     return p[--top];
 }
