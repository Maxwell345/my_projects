#include <stdio.h>
#include <string.h>
 
int main(void)
{
	int i,k,j,cnt,sum;
	
	char s[203];
	
	int flag[26];
	while(gets(s))
	{
	    char check[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		cnt=1;sum=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				s[i]+=32;
			}
		}           //ȫ��ת����Сд 
		
		     
		
		
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==' ')
			{
				cnt++;
			}
		}
	    //������=�ո���+1 
		for(i=0;i<26;i++)
		{
			flag[i]=0;
		}
		    
		for(i=0;s[i]!='\0';i++)
		{
			for(j=0;j<26;j++)
			{
				if(s[i]==check[j])
				{
					
					flag[j]=1;
					check[j]=0;
					 //�����ظ����� 
				}
			}
		}
		for(j=0;j<26;j++)
		{
			sum+=flag[j];
		}        
		  //��ĸ��    
		//printf("%d ",cnt); 
		//printf("%d ",sum);
		
		
		if(sum<=10&&cnt<=10) printf("Yes\n");
		else printf("No\n");
	}
} 
