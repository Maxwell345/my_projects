#include <stdio.h>
int f[1008];
int main()
{
	int t,k,i,j;
	f[1]=1;
	for(i=2;i<=1000;i++)
	{
		j=f[i-1];
		do{
			j++;
		}while(j%3==0||j%10==3);
		f[i]=j;
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
		printf("%d\n",f[k]);
	}
}
