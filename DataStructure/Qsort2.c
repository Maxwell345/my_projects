#include <stdio.h>
int arr[100011];
void swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;
}
int partition(int *a,int left,int right)
{
	int i,j;
	i=left;j=right;
	int key=a[left];
	while(i!=j){
		while(i<j&&a[j]>=key)
			j--;
		swap(&a[i],&a[j]);
		while(i<j&&a[i]<=key)
			i++;
		swap(&a[i],&a[j]);
	}
	return i;
}
void QuickSort(int *a,int left,int right){
	int v;
	if(left<right)
	{
		v=partition(a,left,right);
		QuickSort(a,left,v-1);
		QuickSort(a,v+1,right);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	printf("%d",arr[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
}
