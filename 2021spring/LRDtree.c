#include <stdio.h>
int arr[1010];
int temp[1010];
int z=0;
int lchild(int x)
{
	return 2*x;
}
int rchild(int y)
{
	return 2*y+1;
}
void preorder(int *tree,int j)
{
	if(tree[j]) 		temp[z++]=tree[j];
	if(tree[lchild(j)]) preorder(tree,lchild(j));
	if(tree[rchild(j)]) preorder(tree,rchild(j));
}
void lrd(int *tree,int j)
{
	if(tree[lchild(j)]) lrd(tree,lchild(j));
	if(tree[rchild(j)]) lrd(tree,rchild(j));
	if(tree[j]) 		temp[z++]=tree[j];
}
void midorder(int *tree,int j)
{
	if(tree[lchild(j)]) midorder(tree,lchild(j));
	if(tree[j]) 		temp[z++]=tree[j];
	if(tree[rchild(j)]) midorder(tree,rchild(j));
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	preorder(arr,1);
	printf("%d",temp[0]);
	for(i=1;temp[i];i++){
		printf(" %d",temp[i]);
	}printf("\n");
	z=0;
	midorder(arr,1);
	printf("%d",temp[0]);
	for(i=1;temp[i];i++){
		printf(" %d",temp[i]);
	}printf("\n");
	z=0;
	lrd(arr,1);
	printf("%d",temp[0]);
	for(i=1;temp[i];i++){
		printf(" %d",temp[i]);
	}printf("\n");
}
