/
*1����дӦ�ó���ʵ�ֿ�����˳����в���������������������ݲ���͵Ĺ��ܡ�Ҫ���˳���Ľṹ�������������ʵ�ֺ��������ͷ�ļ�SeqList.h�У���������������ļ�test4.cpp�У����������ж���˳���ͨ�����û�������������ʵ�ֶԸ�˳���������ɸ��������͵����ݣ�Ȼ����������Ҫ��ʹ�ö�̬�洢����ķ�ʽ��������ռ䡣
��ʵ����ʾ��
      �ṹ���弰��������ʵ�ֺ���������£�
typedef struct {
ElemType *elem;  
int length;        
int MaxSize;     
} SqList;
Status InitList(SqList &L)    
{  //��ʼ�����Ա�      
��������
}
void DestroyList(SqList &L)
{   //�������Ա�
         ��������
}
int  ListLength(SqList L)
{  //�����Ա���
������..
}

void TraverseList(SqList L)
{   //�������Ա�
         ������������
}
Status ListInsert(SqList &L, int i , ElemType e)
{   //�����Ա��i��λ�ò���һ��Ԫ��e
          ����.
}
int GetElem(SqList L, int i, ElemType &e)
{  //�����Ա�L��ȡ��i��λ�õ�Ԫ�أ���e����
��������..  
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
		cout << "���α���Ԫ�ظ���Ϊ: " << l << endl;
		cout <<  "������i,e,�ڱ��е�iλ����Ԫ��e" <<endl <<  "i:";
		cin  >> i;
		cout << "e:";
		cin  >> e;
		ListInsert(L,i,e);
		cout << "����i,��ȡ���Ա��i��Ԫ��Ϊe" << endl << "i:";
		cin  >> i;
		if(GetElem(L,i,e)) cout << "��" << i << "��Ԫ��eΪ:" << e << endl;
		SortList(L);
		cout << "���Ա���Ԫ��Ϊ:" << endl;
		TraverseList(L);
		DestroyList(L);
	}
	return 0;
}