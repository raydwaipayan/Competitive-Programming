#ifndef BINARY_H_INCLUDED
#define BINARY_H_INCLUDED
int binarysearch(int* arr, int len,int key)
{
    int low,mid,high;
    low=0; high=len-1;mid=(low+high)/2;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>arr[mid])
            low=mid+1;
        else if(key<arr[mid])
            high=mid-1;
        else
            return mid;
    }
    return -1;
}

#endif // BINARY_H_INCLUDED
