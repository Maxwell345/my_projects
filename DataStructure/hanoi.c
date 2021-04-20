#include <stdio.h>
void move(int n,char from,char to)
{
	printf("%c->%d->%c\n",from,n,to);
}
void hanoi(int n,char from,char via,char to)
{
	if(n==1) move(1,from,to);
	else
	{
		hanoi(n-1,from,to,via);
		move(n,from,to);
		hanoi(n-1,via,from,to);
	}

}
int main()
{
	int cnt;
	char a,b,c;
	scanf("%d %c %c %c",&cnt,&a,&b,&c);
	hanoi(cnt,a,c,b);
}
