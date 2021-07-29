#include <stdio.h>
void swapvar(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void swapary(int data[],int i,int j)
{
	int t=data[i];
	data[i]=data[j];
	data[j]=t;
}
int main()
{
	int n,m,pos;
	int left,right;
	int seq[10]={1,2,3,4,5,6,7,8,9,10};
	scanf("%d %d",&n,&m);
	printf("before swaping:n=%d , m=%d\n",n,m);
	swapvar(&n,&m);
	printf("after swaping:n=%d , m=%d\n",n,m);
	scanf("%d %d",&left,&right);
	printf("the array before swaping:\n");
	for(pos=0;pos<10;pos++)
	{
		printf("%d ",seq[pos]);
	}
	printf("\n");
	swapary(seq,left-1,right-1);
	printf("the array after swaping:\n");
	for(pos=0;pos<10;pos++)
	{
		printf("%d ",seq[pos]);
	}
	printf("\n");
}
