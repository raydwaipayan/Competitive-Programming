#include <bits/stdc++.h>
using namespace std;

#define TABLE_SIZE 13
//second hash function
#define PRIME 7

class DoubleHash
{
    int *hashTable;
    int curr_size;
public:
    bool isFull()
    {
        return (curr_size==TABLE_SIZE);
    }
    //function to calculate first hash
    int hash1(int key)
    {
        return (key%TABLE_SIZE);
    }
    //function to calculate second hash
    int hash2(int key)
    {
        return (PRIME-(key%PRIME));
    }
    DoubleHash()
    {
        hashTable=new int[TABLE_SIZE];
        curr_size=0;
        fill(hashTable, hashTable+TABLE_SIZE, -1);
    }
    void insertHash(int key)
    {
        if(isFull())
            return;
        
        int index=hash1(key);
        //if collision occurs
        if(hashTable[index]!=-1)
        {
            int index2=hash2(key);
            int i=1;
            while(1)
            {
                int newIndex=(index +i*index2)%TABLE_SIZE;
                if(hashTable[newIndex==-1])
                {
                    hashTable[newIndex]=key;
                    break;
                }
                i++;
            }
        }
        //if no collision occurs
        else
        {
            hashTable[index]=key;
        }
        curr_size++;
    }
    void displayHash()  
    {
        for(int i=0;i<TABLE_SIZE;i++)
        {
            if(hashTable[i]!=-1)
                cout<<i<<"-->"<<hashTable[i]<<"\n";
            else
                cout<<i<<"\n";
        }
    }
}; 
int main()
{
    int a[]={19,27,36,10,64};
    int n=sizeof(a)/sizeof(a[0]);

    //inserting keys into hash table
    DoubleHash h;
    for(int i=0;i<n;i++)
    {
        h.insertHash(a[i]);
    }
    cout<<"The hash:\n";
    h.displayHash();
    return 0;
}