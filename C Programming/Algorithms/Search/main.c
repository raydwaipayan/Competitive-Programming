#include <stdio.h>
#include <stdlib.h>
#include "Binary.h"
int main()
{
    int len;
    puts("Enter size of array");
    scanf("%d",&len);
    int* arr=(int*)malloc(len*sizeof(int));
    printf("Enter %d numbers to the array\n",len);
    for(register int i=0;i<len;i++)
    {
        scanf("%d",arr+i);
    }
    puts("Enter a number to search");
    int n;
    scanf("%d",&n);
    int search=binarysearch(arr,len,n);
    if(search==-1)
    {
        puts("Error! Not found");
    }
    else
    {
        printf("Element found at index %d",search);
    }
}
