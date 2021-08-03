#include <stdio.h>
int max(int x,int y){
	return x>y?x:y;
}
int main()
{
	int a[1005],lis[1005];
	int n,i,j,ans;
	scanf("%d",&n);ans=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		lis[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]>=a[j]) lis[i]=max(lis[j]+1,lis[i]);
			ans=max(ans,lis[i]);
		}
	}
	printf("%d\n",ans);
}
