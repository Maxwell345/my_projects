#include <stdio.h>
int main()
{
	int t,n,i,temp;
	int cats[110];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			cats[i]=i;
		}
		temp=cats[n];
		for(i=n;i>=2;--i)
			cats[i]=cats[i-1];
		cats[1]=temp;
		for(i=1;i<=n;i++)
			printf("%d ",cats[i]);
		printf("\n");
	}
}
