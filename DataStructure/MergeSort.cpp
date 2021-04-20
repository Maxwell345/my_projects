#include <stdio.h>
void merge(int a[],int b[],int left,int right)
{
	int m,j;
	m=right-left+1;
	int i,lft,mid,k;
	i=0;lft=left;
	mid=(right+left)/2;k=mid+1;
	while(left<=mid&&k<=right)
	{
		if(a[left]<a[k]) b[i++]=a[left++];
		else    		 b[i++]=a[k++];
	}
	if(left>mid) //若第二个序列有剩余
	{
		for(k;k<=right;k++)
		{
			b[i++]=a[k];
		}
	} 
	if(k>right) //若第二个序列有剩余
	{
		for(left;left<=k;left++)
		{
			b[i++]=a[left];
		}
	} 
	for(j=0;j<m;j++)
	{
		a[lft++]=b[j];
	}
}
void MG_sort(int a[],int b[],int left,int right)
{
	if(left==right) return;
	if(left<right)
	{
		int md=(right+left)/2;
		MG_sort(a,b,left,md);
		MG_sort(a,b,md+1,right);
		merge(a,b,left,right);
	}
}
void huiche()
{
	printf("\n");
}
void ShowArray(int a[],int head,int tail)
{
	int q;
	printf("%d",a[head]);
	for(q=head+1;q<=tail;q++)
	{
		printf(" %d",a[q]);
	}
	huiche();
}
int main()
{
	int n,ij;
	while(scanf("%d",&n)!=EOF)
	{
		int data[n];
		int tmp[n];
		for(ij=0;ij<n;ij++)
		{
			scanf("%d",&data[ij]);
		}
		MG_sort(data,tmp,0,n-1);
		ShowArray(data,0,n-1);
	}
}
