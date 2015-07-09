// 单链表中基本操作的实现
#include <cstdio>
#include <iostream>
#include <cstring>
// 关于程序中宏定义的若干定义
#define OVERFLOW 0
#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
typedef int Status;
// 链式存储结构的类型定义
#define MAXSIZE 100
typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode *next // 结点的指针域
}LNode,*LinkList; // LinkList为指向结构体LNode的指针类型

// 函数开始
Status InitList (LinkList &L) {
	L = new LNode;
	L->next = NULL;
	return OK;
}

Status GetElem (LinkList L, int i, ElemType &e) {
	p = L->next;
	int j = 1;
	while(p && j<i) {
		p = p->next;
		j++;
	}
	if(!p || j>i) return ERROR;
	e = p->data;
	return OK;
}

LNode *LocateElem (LinkList L, ElemType e) {
	p = L->next;
	while(p && p->next!=e)
		p = p->next;
	return p;
}

Status ListInsert (LinkList &L, int i, ElemType e) {
	LNode *p = L;
	int j = 0;
	while(p && (j<i-1)) {
		p = p->next;
		j++;
	}
	if(!p || j>i-1) return ERROR;
	s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListDelete (LinkList &L, int i) {
	LNode *p = L;
	int j = 0;
	while((p->next) && (j<i-1)) { // p指向第i-1个结点
		p = p->next;
		j++;
	}
	if(!(p->next) || (j>i-1)) return ERROR; // 当i>n或i<1时，删除位置不合理
	LNode *q = p->next; // 临时白村被删结点的地址以备释放
	p->next = q->next;
	delete q;
	return OK;
}

void CreateList_H (LinkList &L, int n) {
	L = new LNode;
	L->next = NULL;
	for(int i=0; i<n; i++) {
		p = new LNode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}

void CreateList_R (LinkList &L, int n) {
	L = new LNode;
	L->next = NULL;
	LNode *r = L;
	for(int i=0; i<n; i++) {
		LNode *p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}