#include <stdio.h>
int data[30050];
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
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
	int n,i,j;
	int ans,tp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	QuickSort(data,0,n-1);
    ans=0;
    /*for(i=0;i<n;i++)
    {
    	printf("%d ",data[i]);
	}*/
    
	for(i=1;i<n;i++)
	{
		data[i]+=data[i-1];
		ans+=data[i];
		tp=data[i];j=i+1;
		while(j<n&&tp>data[j]){
			data[j-1]=data[j];
			j++;
		}
		data[j-1]=tp;
	}
	printf("%d\n",ans);
	return 0;
}
