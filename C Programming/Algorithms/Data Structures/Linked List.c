#include <stdio.h>
struct node{
    int data;
    struct node *next;
};

void insert(struct node *head, int data)
{
    if(head->next)
    {
        insert(head->next, data);
    }
    else
    {
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;temp->next=NULL;
    head->next=temp;
    }
}
void print(struct node *head)
{
    if(head)
    {
        printf("%d\n",head->data);
        print(head->next);
    }

}
int main()
{
    struct node test,test2;
    test.data=2;test.next=&test2;
    test2.data=4;test2.next=NULL;
    print(&test);
    printf("Adding element\n");
    insert(&test, 5);
    print(&test);
    return 0;
}


