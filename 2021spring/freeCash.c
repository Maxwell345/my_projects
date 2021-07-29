#include <stdio.h>
int cnt[24][60];
typedef struct{
	int h;
	int m;
}hmtime;
int main()
{
	int st,i,a,b;
	int j,k,pmax;
	scanf("%d",&st);
	hmtime timedata[st];
	for(i=0;i<st;i++)
	{
		scanf("%d %d",&a,&b);
		timedata[i].h=a;
		timedata[i].m=b;
	}
	for(i=0;i<st;i++)
	{
		for(j=0;j<24;j++)
		{
			for(k=0;k<60;k++)
			{
				if(timedata[i].h==j&&timedata[i].m==k) cnt[j][k]++;
			}
		}
	}
	pmax=cnt[0][0];
	for(i=0;i<24;i++)
	{
		for(j=0;j<60;j++)
		{
			if(cnt[i][j]>pmax) pmax=cnt[i][j];
		}
	}
	printf("%d\n",pmax);
}
