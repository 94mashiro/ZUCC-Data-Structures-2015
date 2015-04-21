/*
1、	在计算机中实现上述三元组抽象数据类型。步骤如下：
（1）首先搭好实现该抽象数据类型的整个C语言程序的模块框架结构图，即在一个工程中分别建立两个文件：头文件test3.h与主程序文件test3.cpp。
（2）编写test3.h和test3.cpp两个文件，其中test3.h中包含三元组的各种操作函数的实现，test3.cpp中包含三元组存储结构定义与主函数，主函数主要用于验证test3.h中各函数的正确性。编译并调试程序，直到正确运行。

基本操作：
    InitTriplet(&T, v1, v2, v3)
       操作结果：构造三元组T，元素e1, e2和e3分别被赋以v1, v2, v3值
    DestroyTriplet(&T)
       操作结果：三元组T被销毁
    Get(T, i, &e)
       初始条件：三元组T已存在，1≤i≤3
       操作结果：用e返回T的第i元的值
	IsAscending(T)
       初始条件：三元组T已存在
       操作结果：如果T的三个元素按升序排列，则返回1，否则返回0
	IsDecending(Triplet T);
       初始条件: 三元组T已存在
       操作结果: 如果T的三个元素按降序排列，则返回1，否则返回0
    Put(&T, i, e)
       初始条件：三元组T已存在，1≤i≤3
       操作结果：改变T的第i元的值为e
    Max(T, &e)
       初始条件：三元组T已存在
       操作结果：用e返回T的三个元素中的最大值
    Min(T, &e)
       初始条件：三元组T已存在
       操作结果：用e返回T的三个元素中的最小值
  } ADT Triplet
*/



#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
typedef int *T;
#include"test3.h"
int main(void)
{
	int e,i,j,k,a,b,c;
	T t;
	printf("请给三元组附值：");
	scanf("%d%d%d",&a,&b,&c);
	i=InitTriplet(t,a,b,c);
	printf("调用初始化函数后：i=%d（1：成功；否则：不成功）",i);
	printf("\n三元组中三个元素的值分别为：");
	printf("t[0]=%d,t[1]=%d,t[2]=%d\n",t[0],t[1],t[2]);
	printf("\n你想改变第几个数，请输入一个数（1或2或3）:");
	scanf("%d",&i);
	Get(t,i,e);
	printf("t的第%d个值为：%d\n",i,e);
	printf("\n你想将它改为：");
	scanf("%d",&e);
	Put(t,i,e);
	printf("改变后的t的三个值为：%d, %d, %d",t[0],t[1],t[2]);
	j=IsAscending(t);
	printf("\nj=%d（1：三元组按升序排列；0：三元组不按升序排列）",j);
	k=IsDecending(t);
	printf("\nk=%d（1：三元组按降序排列；0：三元组不按降序排列）",k);
	Max(t,e);
	printf("\nt中最大值为：%d",e);
	Min(t,e);
	printf("\nt中最小值为：%d\n",e);
	DestroyTriplet(t);
    return 0;
}
