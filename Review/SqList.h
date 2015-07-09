// 顺序表中基本操作的实现
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
typedef int ElemType;
typedef struct {
  ElemType *elem; //动态存储空间的首地址
  int length; //当前元素的个数，最后一个下表为length-1
  int MaxSize; //动态存储空间的大小，即elem数组的长度
} SqList;
// 函数开始
Status InitList (SqList &L) {
  L.elem = new ElemType[MAXSIZE];
  if(!L.elem) exit(OVERFLOW);
  L.length = 0;
  return OK;
}

Status GetElem (SqList L, int i, ElemType &e) {
  if(i<1 || i>L.length) return ERROR;
  e = L.elem[i-1];
  return OK;
}

int LocateElem (SqList L,ElemType e) {
  for(int i=0; i<L.length; i++)
    if(L.elem[i] == e) return i+1;
  return 0;
}

Status ListInsert (SqList &L, int i, ElemType e) {
  if((i<1) || (i>L.length+1)) return ERROR;
  if(L.length == MAXSIZE) return ERROR;
  for(int j=L.length-1; j>=i-1; j--)
    L.elem[j+1] = L.elem[j];
  L.elem[i-1] = e;
  L.length++;
  return OK;
}

Status ListDelete (SqList &L, int i) {
  if((i<1) || (i>L.length)) return ERROR;
  for(int j=i; j<=L.length-1; j++)
    L.elem[j-1] = L.elem[j];
  L.length--;
  return OK;
}
