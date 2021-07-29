#include <stdio.h>
int data[500];
int binsearch(int *arr,int find,int size)
{
	int low,high,mid,cnt;
	low=1;high=size;cnt=0;
	while(low<=high){
		mid=(low+high)/2;/*printf("mid=%d\n",mid);*/
		cnt++;
		if(find<arr[mid])	  high=mid-1;
		else if(find>arr[mid]) low=mid+1;
		else return cnt;
	}
	return 0;
}
int main()
{
	int n,key,i,ans;
	scanf("%d%d",&n,&key);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&data[i]);
	}
	ans=binsearch(data,key,n);
	printf("%d\n",ans);
}
