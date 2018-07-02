#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//The following code sample will deal with bubble sort
int bubble_sort(int arr[])
{
    printf("The sorted array is\n");
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
//The following code sample deals with selection sorting12
int selection_sort(int arr[])
{
    printf("The sorted array is\n");

    for(int i=0;i<9;i++)
    {
        int pos=i;
        int mini=arr[i];
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]<mini)
            {
                pos=j;
                mini=arr[j];
            }
        }
        arr[pos]=arr[i];
        arr[i]=mini;
    }
    return 0;
}

//The next code sample deals with insertion sort
int insertion_sort(int arr[])
{
    for(int i=1;i<10;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr [j+1]=key;
    }
}
