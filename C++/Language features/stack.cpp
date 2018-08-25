#include <iostream>
#include <cstdlib>
//A stack uses a LIFO principle
//Objects are inserted to the top of the stop and can be called only from the top
using namespace std;
class stack_c{
private:
int* arr;
int top=-1;
unsigned int len;
public:
stack_c(int len)
{
    this->len=len;
    arr=(int*)malloc(len*sizeof(int));
}
~stack_c()
{
    free(arr);
    cout<<"Destructing stack"<<endl;
}
int push(int a)
{
    if(top==len-1)
        return -1;
    arr[++top]=a;
    return 0;
}
int pop()
{
    if(top==-1)
        return -1;
    else
        return arr[top--];
}
int size_c()
{
    return top+1;
}
bool isEmpty()
{
    return (top==-1)?true:false;
}
int top_c()
{
    if(top==-1)
        return -1;
    return arr[top];
}
};
int main(void)
{
    stack_c s(10);
    for(register int i=1;i<=10;i++)
    {

        s.push(i);
    }
    printf("Popped element %d\n",s.pop());
    printf("The top element is %d\n",s.top_c());
    printf("Size of stack is %d\n",s.size_c());
    printf("Stack full status: %s\n",s.isEmpty()?"true":"false");

}
