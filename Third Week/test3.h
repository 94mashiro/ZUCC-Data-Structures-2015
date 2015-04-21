int InitTriplet(T &t,int a,int b,int c)
{
	if(!(t=(int *)malloc(3*(sizeof(int)))))
		return 0;
	t[0]=a;t[1]=b;t[2]=c;
	return 1;
}
void DestroyTriplet(T &t)
{
	free(t);
}
void Get(T t,int i,int &e)
{
	e=t[i-1];
}
int IsAscending(T t)
{
	if(t[1]>t[0]&&t[2]>t[1])
		return 1;
	else
		return 0;
}
int IsDecending(T t)
{
	if(t[1]<t[0]&&t[2]<t[1])
		return 1;
	else
		return 0;
}
void Put(T &t,int i,int e)
{
	t[i-1]=e;
}
void Max(T t,int &e)
{
	e=t[1];
	if(t[0]>t[1])
		e=t[0];
	if(t[2]>e)
		e=t[2];
}
void Min(T t,int &e)
{
	e=t[0];
	if(t[0]>t[1])
		e=t[1];
	if(t[2]<e)
		e=t[2];
}

