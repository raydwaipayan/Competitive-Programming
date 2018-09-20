#include <stdio.h>
#include <stdlib.h>
struct tree{
int data;
struct tree* left;
struct tree* right;
};
struct tree* root;
struct tree* insert(struct tree* root, struct tree* r, int data)
{
    if(!r)
    {
        r=(struct tree*)malloc(sizeof(struct tree));
        r->data=data;
        r->left=NULL;
        r->right=NULL;

        if(!root)
        {
            return r;
        }
        if(data<root->data)
            root->left=r;
        if(data>root->data)
            root->right=r;
        return root;
    }
    if(data<r->data)
        insert(r, r->left,data);
    if(data>r->data)
        insert(r,r->right,data);
    return root;
}
void inorder(struct tree* root)
{
    if(!root)
        return;
    inorder(root->left);
    if(root->data)
        printf("%d\n",root->data);
    inorder(root->right);
}
void preorder(struct tree* root)
{
    if(!root)
        return;
    if(root->data)
        printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct tree* root)
{
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    if(root->data)
        printf("%d\n",root->data);
}
int main(void)
{
    struct tree* node=(struct tree*)malloc(sizeof(struct tree));
    node->data=2;
    node->left=NULL;node->right=NULL;
    root=insert(node,NULL,3);
    printf("Insertion successful\n");
    inorder(root);
    return 0;
}
