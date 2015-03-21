//
//  main.cpp
//  Data-Structures-02-01
//
//  Created by Smoogle Wong on 15/3/21.
//  Copyright (c) 2015年 Smoogle Wong. All rights reserved.
//

/* 输入若干个学生信息（包括学号、姓名和成绩），输入学号为0时输入结束，建立一个单向链表，再输入一个成绩值，将成绩大于等于该值的学生信息输出。
输入输出示例：
1 zhang 78
2 wang 80
3 Li 75
4 zhao 85
0
80
2 wang 80
4 zhao 85 */


#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int num;
    char name[20];
    int score;
    struct Node *next;
};

int main()
{
    struct Node *head=NULL,*tail;
    int num,score;
    char name[20];
    cin>>num;
    while(num)
    {
        cin>>name>>score;
        if(head==NULL)
        {
            Node *tmp;
            tmp=new Node;
            tmp->num=num;
            strcpy(tmp->name, name);
            tmp->score=score;
            head=tail=tmp;
        }
        else
        {
            Node *tmp;
            tmp=new Node;
            tmp->num=num;
            strcpy(tmp->name, name);
            tmp->score=score;
            tmp->next=NULL;
            tail->next=tmp;
            tail=tmp;
        }
        cin>>num;
    }
    int min;
    cin>>min;
    for(Node *i=head; i!=NULL;i=i->next)
    {
        if(i->score<min) continue;
        cout<<i->num<<" "<<i->name<<" "<<i->score<<endl;
    }
    return 0;
}