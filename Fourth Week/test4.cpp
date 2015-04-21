/
*1、编写应用程序，实现可以在顺序表中插入任意给定数据类型数据并求和的功能。要求把顺序表的结构定义与基本操作实现函数存放在头文件SeqList.h中，主函数存放在主文件test4.cpp中，在主函数中定义顺序表并通过调用基本操作函数来实现对该顺序表插入若干个整数类型的数据，然后求和输出。要求使用动态存储分配的方式申请数组空间。
【实现提示】
      结构定义及基本操作实现函数框架如下：
typedef struct {
ElemType *elem;  
int length;        
int MaxSize;     
} SqList;
Status InitList(SqList &L)    
{  //初始化线性表      
…………
}
void DestroyList(SqList &L)
{   //销毁线性表
         …………
}
int  ListLength(SqList L)
{  //求线性表长度
………..
}

void TraverseList(SqList L)
{   //遍历线性表
         ………………
}
Status ListInsert(SqList &L, int i , ElemType e)
{   //在线性表第i个位置插入一个元素e
          …….
}
int GetElem(SqList L, int i, ElemType &e)
{  //在线性表L中取第i个位置的元素，由e返回
…………..  
}
*/




#include<iostream>
#include<cstring>
#include<cmath>
#include<stdlib.h>
typedef int ElemType;
using namespace std;
typedef struct {
	ElemType *elem;  
	int length;        
	int MaxSize;     
} SqList;
#include"SeqList.h"
int main(){
	int e,i,l;
	SqList L;
	if(InitList(L)){
		l = ListLength(L);
		cout << "线形表中元素个数为: " << l << endl;
		cout <<  "请输入i,e,在表中第i位插入元素e" <<endl <<  "i:";
		cin  >> i;
		cout << "e:";
		cin  >> e;
		ListInsert(L,i,e);
		cout << "输入i,获取线性表第i个元素为e" << endl << "i:";
		cin  >> i;
		if(GetElem(L,i,e)) cout << "第" << i << "各元素e为:" << e << endl;
		SortList(L);
		cout << "线性表中元素为:" << endl;
		TraverseList(L);
		DestroyList(L);
	}
	return 0;
}