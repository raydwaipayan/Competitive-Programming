#include <bits/stdc++.h>
using namespace std;
typedef map<int, vector<int>> MIV;

struct node{
    int key;
    node *left, *right;
};

struct node* newNode(int key)
{
    struct node* n=new node;
    n->key=key;
    n->right=n->left=NULL;
    return n;
}
//prepares a map of the horizontal distances of the nodes from the root
void getVerticalOrder(node *root, int hd, MIV &m)
{
    //base case
    if(root==NULL)
        return;
    m[hd].push_back(root->key);

    getVerticalOrder(root->left, hd-1, m);
    getVerticalOrder(root->right, hd+1,m);
}
void printVerticalOrder(node *root)
{
    MIV m;
    getVerticalOrder(root, 0, m);

    MIV::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        for(int i=0;i<it->second.size();i++)
            cout<<it->second[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->left->right=newNode(8);
    root->right->right->right=newNode(9);

    cout<<"Vertical Order traversal is\n";
    printVerticalOrder(root);
    return 0;
}