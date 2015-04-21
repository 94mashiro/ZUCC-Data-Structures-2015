int InitList(SqList &L){
	char ch;
	int  l;
	L.MaxSize = 100;
	L.elem = (int * )malloc(100*sizeof(int));
	if(L.elem == NULL) return 0;
	l = 0;
	cout << "������Ԫ�أ��Իس����������100��:";
	while(cin >> L.elem[l]){
		ch = getchar();
		l++;
		if(ch == '\n'|| l == 100) break;
	}
	L.length = l;
	return 1;
}




bool ListDelete(SqList &L, int i) {
	if ((i<1)||(i>L.length))  return false;  //iֵ���Ϸ�
	for (int j=i; j<=L.length-1; j++) //��ɾ��Ԫ��֮���Ԫ��ǰ��  
		L.elem[j-1]=L.elem[j];
	--L.length;                      //����1
	if (float (L.length) / L.MaxSize < 0.4 && L.MaxSize > 10 ) 
	{    // �����Ա����ռ�̫�࣬���·���ѹ��
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
	if(L.elem[0] != k) cout << "���ٳɹ�" << endl;
	else cout << "����ʧ��" << endl;
}

int GetElem(SqList L, int i, ElemType &e){
	if(i < 0 || i >= L.length){cout << "�������" << endl;return 0;}
	e = L.elem[i];
	return 1;
}

void ListInsert(SqList &L, int i , ElemType e){   
	if(i > L.length || i < 0) cout << "����ʧ��" << endl;
	   else{
		   for(int j = L.length; j > i; j--)
			   L.elem[j] = L.elem[j-1];
		   L.elem[j] = e;
		   L.length ++;
		   cout << "����ɹ�" <<endl;
	   }
}

void SortList(SqList &L)
{
	int i, j;
	ElemType x;
	for (i=1; i<L.length; i++) {
		x=L.elem[i];            //������Ԫ���ݴ�
		for (j=i-1;j>=0;j--)   //��ǰ�Ƚϲ��ƶ�Ԫ�أ��Ҳ���λ��
			if (x<L.elem[j]) 
				L.elem[j+1]=L.elem[j];
			else 
				break;
			L.elem[j+1]=x;        //����
	}
}

