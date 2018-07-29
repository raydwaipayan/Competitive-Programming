#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    puts("Enter rows and column no. separated by a ,");
    int r,c;
    scanf("%d,%d",&r,&c);
    int **arr=(int**)malloc(r*(sizeof(int*)));
    arr[0]=(int*)malloc(r*c*sizeof(int));
    if(arr[0][0]==NULL)
    {
        puts("Error! Memory FULL!");
        exit(1);
    }
    register int i,j;
    puts("Enter the array elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(arr+i*r+j));
        }
    }
    printf("\n\nThe array is::\n");
    //printing array
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",*(arr+i*r+j));
        }
        printf("\n");
    }
    return 0;
}
