#include <stdio.h>
int main()
{
	int m,t,s;
	scanf("%d%d%d",&m,&t,&s);
	if(t==0) m=0;
	else{
		if(s%t==0) m-=(s/t);
		else       m=m-(s/t)-1;
	}
	if(m < 0) m = 0;
	printf("%d\n",m);
}
