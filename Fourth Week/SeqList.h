int InitList(SqList &L){
	char ch;
	int  l;
	L.MaxSize = 100;
	L.elem = (int * )malloc(100*sizeof(int));
	if(L.elem == NULL) return 0;
	l = 0;
	cout << "请输入元素，以回车结束，最多100个:";
	while(cin >> L.elem[l]){
		ch = getchar();
		l++;
		if(ch == '\n'|| l == 100) break;
	}
	L.length = l;
	return 1;
}




bool ListDelete(SqList &L, int i) {
	if ((i<1)||(i>L.length))  return false;  //i值不合法
	for (int j=i; j<=L.length-1; j++) //被删除元素之后的元素前移  
		L.elem[j-1]=L.elem[j];
	--L.length;                      //表长减1
	if (float (L.length) / L.MaxSize < 0.4 && L.MaxSize > 10 ) 
	{    // 若线性表空余空间太多，重新分配压缩
		L.elem= (ElemType *) realloc(L.elem, 
			L.MaxSize *sizeof(ElemType) / 2 ) ; 
		L.MaxSize = L.MaxSize / 2;
	}
	return true;
}

int  ListEmpty(SqList L)
{
    if (L.length==0)  
		return 1;      
	else 
		return 0;
}

int  ListLength(SqList L){
	return L.length;
}
void TraverseList(SqList L){
	int i;
	for(i = 0; i < L.length ; i++)
		cout <<  " " << L.elem[i];
	cout << endl;
}

void DestroyList(SqList &L){
	int k = L.elem[0];
	free(L.elem);
	//cout << L.elem[0];
	if(L.elem[0] != k) cout << "销毁成功" << endl;
	else cout << "销毁失败" << endl;
}

int GetElem(SqList L, int i, ElemType &e){
	if(i < 0 || i >= L.length){cout << "错误参数" << endl;return 0;}
	e = L.elem[i];
	return 1;
}

void ListInsert(SqList &L, int i , ElemType e){   
	if(i > L.length || i < 0) cout << "插入失败" << endl;
	   else{
		   for(int j = L.length; j > i; j--)
			   L.elem[j] = L.elem[j-1];
		   L.elem[j] = e;
		   L.length ++;
		   cout << "插入成功" <<endl;
	   }
}

void SortList(SqList &L)
{
	int i, j;
	ElemType x;
	for (i=1; i<L.length; i++) {
		x=L.elem[i];            //待插入元素暂存
		for (j=i-1;j>=0;j--)   //向前比较并移动元素，找插入位置
			if (x<L.elem[j]) 
				L.elem[j+1]=L.elem[j];
			else 
				break;
			L.elem[j+1]=x;        //插入
	}
}

