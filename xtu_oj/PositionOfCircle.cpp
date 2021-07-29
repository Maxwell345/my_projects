#include <stdio.h>
int pos(int d2,int a,int b)
{
	if(d2==(a+b)*(a+b)) return 4;//外切
	else if(d2==(a-b)*(a-b)) return 2;//外切
	else if(d2>(a+b)*(a+b))  return 5;//相离
	else if(d2<(a-b)*(a-b))  return 1;//内含
	else                     return 3;//相交 
}
int main(void)
{
	int x1,y1,r1,x2,y2,r2;
	int distance2;
	int sample;
	scanf("%d",&sample); 
	while(sample--)
	{
		scanf("%d %d %d",&x1,&y1,&r1);
		scanf("%d %d %d",&x2,&y2,&r2);
		distance2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		printf("%d\n",pos(distance2,r1,r2));
	} 
}
