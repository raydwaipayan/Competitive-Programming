#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "sources.h"
#include "merge_sort.h"
#define max 10
int arr[max];
int main()
{
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Merge Sort\n");
    printf("4. Insertion Sort\n");

    printf("Enter your choice :: ");
    int c;
    scanf("%d",&c);
    for(int i=0;i<10;i++)
    {
        printf("Enter a number:: ");
        scanf("%d",(arr+i));
    }
    switch(c)
    {
        case 1: bubble_sort(arr);break;
        case 2: selection_sort(arr);break;
        case 3: merge_sort(arr);break;
        case 4: insertion_sort(arr);break;
        default: printf("Wrong choice entered\n");
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",*(arr+i));
    }

}
