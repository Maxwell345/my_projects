#include <stdio.h>
#include <string.h>
char s[1005];
int costring(int x,int y)
{
	int k=y;
	while(k--)
	{
		if(s[x]!=s[x+y]) return 0;
		x++;
	}
	return 1;
}
int main(void)
{
	
	int sample,sum;
	int i,j,len,half_len;
	scanf("%d",&sample);
	
	
	while(sample--)
	{
		scanf("%s",&s);
		len=strlen(s);
		half_len=len/2;
		sum=0;
		for(i=half_len;i>=0;i--)
		{
			for(j=0;j+i<len;j++)
			{
				if(costring(j,i))
				{
					sum=i;
					break;
				}
			}
			if(sum>0) break;
		}
		
		sum*=2;
		printf("%d\n",sum);
	}
}
