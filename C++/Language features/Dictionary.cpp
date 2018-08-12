#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define max 10
typedef struct list{
    int data;
    struct list *next;
    } node_type;
node type *ptr[max], *root[max],*temp[max];
class Dictionary
{

public:
    int index;
    Dictionary();
    voi insert(int);
    void search(int);
    void delete_ele(int);
};
Dictionary::Dictionary()
{

    index=-1;
    for(int i=0;i<max;i++)
    {
        root[i]=NULL;
        ptr[i]=NULL:
        temp[i]=NULL;
    }
}
void Dictionary::insert(int key)
{
    index=int(key%max);
}
