#ifndef INSERTION_SORT_H_INCLUDED
#define INSERTION_SORT_H_INCLUDED

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

#endif // INSERTION_SORT_H_INCLUDED

