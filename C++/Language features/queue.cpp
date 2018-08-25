#include <iostream>
#include <cstdlib>
using namespace std;
//Queue is a FIFO data structure
//Elements are added to the top and extracted from the back

class queue_c
{
    private:
    unsigned int len;
    int front=0,end=0;
    int *arr;
    public:
    queue_c(int len)
    {
        this->len=len;
        arr=(int*)malloc(len*sizeof(int));
    }
    int enqueue(int a)
    {
        if(end==(len))
            return -1;
        arr[end++]=a;
        return 0;
    }
    int dequeue()
    {
        if(front==end)
            return -1;
        return arr[front++];
    }
    int size_c()
    {
        return (end-front);
    }
    bool isEmpty()
    {
        return (front==end)?true:false;
    }
    int front_c()
    {
        if(front==end)
            return -1;
        return arr[front];
    }
};

int main(void)
{
    queue_c q(10);
    for(register int i=0;i<10;i++)
    {
        q.enqueue(i);
    }
    printf("The size of queue is %d\n",q.size_c());
    printf("Deleted element %d\n",q.dequeue());
    printf("The front element is %d\n",q.front_c());
    printf("Queue empty status: %s", q.isEmpty()?"true":"false");

}
