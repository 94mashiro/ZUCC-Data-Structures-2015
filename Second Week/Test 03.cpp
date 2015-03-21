//
//  main.cpp
//  Data-Structures-02-03
//
//  Created by Smoogle Wong on 15/3/21.
//  Copyright (c) 2015年 Smoogle Wong. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    int num;
    struct Node *next;
};

int main()
{
    int num;
    struct Node *head=NULL,*tail=NULL,*tmp;
    cin>>num;
    while(num!=-1)
    {
        if(head==NULL)
        {
            Node *tmp;
            tmp=new Node;
            tmp->num=num;
            head=tail=tmp;
        }
        else
        {
            Node *tmp;
            tmp=new Node;
            tmp->num=num;
            tmp->next=NULL;
            tail->next=tmp;
            tail=tmp;
        }
        cin>>num;
    }
    Node *i;
    for(i=head; i;)
    {
        if( i->next==NULL || ((i->next)->num)&1 )
        {
            i=i->next;
            continue;
        }
        Node *del=i->next;
        i->next=del->next;
        delete(del);
    }
    for(i=head->next; i; i=i->next)
    {
        if(i!=head->next)
            cout << " ";
        cout << i->num;
    }
    cout << endl;
    return 0;
}