//
//  main.cpp
//  Data-Structures-02-02
//
//  Created by Smoogle Wong on 15/3/21.
//  Copyright (c) 2015年 Smoogle Wong. All rights reserved.
//

/*
输入若干个正整数（输入-1为结束标志），要求按输入数据的逆序建立一个链表，并输出。
输入输出示例：
1 2 3 4 5 6 7 -1
7 6 5 4 3 2 1 
*/

#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int num;
    struct Node *next;
};
int main()
{
    struct Node *head=NULL,*tail=NULL;
    int num;
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
    stack<int> numstack;
    for(Node *i=head;i;i=i->next)
    {
        numstack.push(i->num);
    }
    while(!numstack.empty())
    {
        cout<<numstack.top()<<" ";
        numstack.pop();
    }
    cout<<endl;
    return 0;
}