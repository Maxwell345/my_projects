#include <stdio.h>
typedef struct{
	int node;
	int lchild;
	int rchild;
}bitree;
int maxd(int x,int y)
{
	return x>y?x:y;
}
int depth(bitree *arr,int j)
{
	if(j==-1) return 0;
	return maxd(depth(arr,arr[j].lchild),depth(arr,arr[j].rchild))+1;
}
int main()
{
	int n,i,ans;
	scanf("%d",&n);
	bitree data[1008];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&data[i].node,&data[i].lchild,&data[i].rchild);
	}
	ans=depth(data,0);
	printf("%d\n",ans);
}
