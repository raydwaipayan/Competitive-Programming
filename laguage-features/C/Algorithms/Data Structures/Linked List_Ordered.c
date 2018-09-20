 #include <stdio.h>
 #include <stdlib.h>
struct node{
    int data;
    struct node *next;};

struct node* insert(struct node *head, int data)
{
    struct node *t=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=data;temp->next=NULL;
    if(head==NULL)
    {
        head=temp;return head;
    }
    if(data<head->data)
    {
        temp->next=head;
        return temp;
    }
    while(data>t->next->data)
    {
        t=t->next;
        if(t->next==NULL)
        {
            t->next=temp;return head;
        }
    }
    temp->next=t->next;
    t->next=temp;
    return head;
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
    test2.data=7;test2.next=NULL;
    print(&test);
    int n;
    printf("Enter an integer to add to ordered link list: ");
    scanf("%d",&n);
    printf("Adding element\n");
    struct node* head=insert(&test, n);
    print(head);
    return 0;
}


