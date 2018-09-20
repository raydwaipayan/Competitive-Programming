#define MAX 100
int p[MAX];
int front=0;
int end=0;
int main()
{
    qstore(5);
    qstore(10);
    printf("%d",qremove());
}
void qstore(int i)
{
    if(front==MAX)
    {
        printf("Error!Queue full");
        return;
    }
    p[front++]=i;
}
int qremove(void)
{
    if(front==end)
    {
        printf("Error! Array Empty");
        return -1;
    }
    return p[end++];
}
