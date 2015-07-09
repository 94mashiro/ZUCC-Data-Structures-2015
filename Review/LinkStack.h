// 链栈的表示和实现
#include <cstdio>
#include <cstring>
// 关于程序中宏定义的若干定义
#define OVERFLOW 0
#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
typedef int Status;
// 链栈存储结构的类型定义
#define MAXSIZE 100
typedef char SElemType;
typedef struct StackNode
{
	SElemType data;
	struct StackNode *next;
}StackNode,*LinkStack;
// 函数开始
Status InitStack (LinkStack &S) {
	S = NULL; // 构造一个空栈S，栈顶指针置空
	return OK;
}

Status Push (LinkStack &S, SElemType e) {
	StackNode *p = new StackNode;
	p->data = e;
	p->next = S;
	S = p;
	return OK;
}

Status Pop (LinkStack &S, SElemType &e) {
	if(S==NULL) return ERROR;
	e = S->data;
	StackNode *p = S;
	S = S->next;
	delete p;
	return OK;
}

SElemType GetTop (LinkStack S) {
	if(S!=NULL)
		return S->data;
}