// 顺序栈的表示和实现
#include <cstdio>
#include <cstring>
// 关于程序中宏定义的若干定义
#define OVERFLOW 0
#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
typedef int Status;
// 顺序存储结构的类型定义
#define MAXSIZE 100
typedef char SElemType;
typedef struct
{
	SElemType *base;
	SElemType *top;
	int stacksize;
}SqStack;
// 函数开始
Status InitStack (SqStack &S) {
	S.base = new SElemType[MAXSIZE];
	if(!S.base) exit(OVERFLOW);
	S.top = S.base;
	S.stacksize = MAXSIZE;
	return OK;
}

Status Push (SqStack &S, SElemType e) {
	if(S.top - S.base == S.stacksize) return ERROR; // 栈满
	*S.top ++= e;
	return OK;
}

Status Pop (SqStack &S, SElemType &e) {
	if(S.top == S.base) return ERROR; // 栈空
	e=*--S.top; // 栈顶指针减1，将栈顶元素赋给e
	return OK;
}

