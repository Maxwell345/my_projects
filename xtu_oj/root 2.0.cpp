#include <stdio.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int a,b,c;
		int x;
		scanf("%d %d %d",&a,&b,&c);
		if(c==1)/*x+a=x+b*/
		{
			if(a!=b) printf("None\n");
			else        /*a=b时可x取除-b外的任意值*/ 
			{
				if(b==0) printf("%d\n",1);  /*b=0最小非负整数解为1*/ 
				else printf("%d\n",0);
			}
		}
		else
		{
		    x=(a-b*c)/(c-1);  
		    if((a-b*c)%(c-1)!=0||x<0||x==-b)  printf("None\n");
		    else printf("%d\n",x);
		}
	}
}
