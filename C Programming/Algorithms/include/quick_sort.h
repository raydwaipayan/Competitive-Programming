#ifndef QUICK_SORT_H_INCLUDED
#define QUICK_SORT_H_INCLUDED
#define len 10
int quick_sort(int arr[])
{
    quicksort(arr,0,len-1);

}
int quicksort(int arr[],int low, int high)
{
    if(low<high)
    {
        int p=part(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int part(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            int temp=arr[i];
            arr[i++]=arr[j];
            arr[j]=temp;
        }
    }
    arr[high]=arr[i];
    arr[i]=pivot;
    return i;

}


#endif // QUICK_SORT_H_INCLUDED
