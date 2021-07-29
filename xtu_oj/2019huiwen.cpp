#include <stdio.h>
#include <string.h>
int main(void)
{
	char digit[20];
	int sample,n,i,I,j;
	int len,flag;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%d",&n);
		flag=1;
		for(I=2;I<=n;I++)
		{
			j=0;
			do{
				digit[j]=n%I;
				n=n/I;
				j++;
				
			}while(n!=0);
			//十进制数转I进制数用除I取余法
			
		    for(i=0;i<=len/2;i++)
		    {
			    if(digit[i]!=digit[len-1-i])
			    {
				    flag=0;
			    	break;
			    }
		    } 
		    if(flag==1) break;
		} 
		printf("%d\n",I);
	}
}
