#include <stdio.h>
int arr[100011];
void QuickSort(int a[],int left,int right){
	if(left>=right) return;
	int i=left;
	int j=right;
	int key=a[left];
	while(i!=j){
		while(i<j&&a[j]>key)
			j--;
		while(i<j&&a[i]<key)
			i++;
		int t=a[i];a[i]=a[j];a[j]=t;
	}
	QuickSort(a,left,i-1);
	QuickSort(a,i+1,right);
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
