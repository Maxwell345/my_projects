#include <stdio.h>
int josephus(int x,int y)
{
	if(x==0) return 0;
	return (josephus(x-1,y)+y)%x;
}
int main()
{
	int n,m,ans;
	scanf("%d %d",&n,&m);
	ans=josephus(n,m);
	ans++;
	printf("%d\n",ans);
}
