#include <stdio.h>
int ctone(int x)
{
	int ans;
	ans=0;
	while(x>0){
		ans+=x&1;
		x>>=1;
	}
	return ans;
}
int main()
{
	int n,st;
	n=-3;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		st=ctone(n);
		do{
			n++;
		}while(ctone(n)!=st);
		printf("%d\n",n);
	}
}
