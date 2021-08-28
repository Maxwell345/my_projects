#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	int t,size;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&a,&b,&c);
		size=2*abs(a-b);
		if(c>size||a>size||b>size) printf("-1\n");
		else{
			c+=abs(a-b);
			if(c>size) c-=size;
			printf("%d\n",c);
		}
	}
}
