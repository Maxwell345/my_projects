#include <stdio.h>
int main()
{
	int times;
	int xal,xau,yal,yau;
	int xbl,xbu,ybl,ybu;
	int temp;
	scanf("%d",&times);
	while(times--)
	{
		scanf("%d %d %d %d",&xal,&yal,&xau,&yau);
		scanf("%d %d %d %d",&xbl,&ybl,&xbu,&ybu);
		if(xal>xau)
		{
			temp=xal;
			xal=xau;
			xau=temp;
		}
		if(yal>yau)
		{
			temp=yal;
			yal=yau;
			yau=temp;
		}
		if(xbl>xbu)
		{
			temp=xbl;
			xbl=xbu;
			xbu=temp;
		}
		if(ybl>ybu)
		{
			temp=ybl;
			ybl=ybu;
			ybu=temp;
		}
		if(xau<=xbl||xbu<=xal||yau<=ybl||ybu<=yal) printf("No\n");
		else                                       printf("Yes\n");
	}
}
