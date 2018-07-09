#define length 10

int shell_sort(int arr[])
{
    int gap[]={5,3,2,1};
    register int i,j,k,c=0,temp;
    for(;k=gap[c]&&c<4;c++)
    {
        for(i=k;i<length;i++)
        {
            temp=arr[i];
            for(j=i;(j>=k && arr[j-k]>temp);j=j-k)
            {
                arr[j]=arr[j-k];
            }
            arr[j]=temp;
        }
    }
    return 0;
}
