#include <stdio.h>
#include <string.h>

int main()
{
	int sample;
	char sa[102];
	char tail[306];
	char sb[102];
	scanf("%d",&sample);
	while(sample--)
	{
		int i,j,k,flag;
		int I,L,temp;
		int len1,len2;
		scanf("%s",sa);
		scanf("%s",sb);
		len1=strlen(sa);
		len2=strlen(sb);
		
		strcpy(tail,sa);
		do{ strcat(tail,sa);}
        while((strlen(tail)<len1+len2)&&(strlen(tail)+len1<306));
		//把sa连接到它自己的末尾,从头扫一遍相当于环形字符串滚一圈 
//		printf("%s\n",tail);
		for(i=0;i<len1;i++)
		{
			k=0;
			for(j=i;j<i+len2;j++)
			{
				flag=1;
//				printf("%c %c %d ",tail[j],sb[k],tail[j]!=sb[k]);
				if(tail[j]!=sb[k])
				{
				    
					flag=0;
					break;
				}
				k++;
			}
			if(flag) break;
		}
		if(flag==0) 
		{
			
	        /*printf("%d\n",len1);*/
	        for(i=0;i<len1;i++)
	        {
		        temp=tail[i];
		        tail[i]=tail[2*len1-i-1];
		        tail[2*len1-i-1]=temp;
	        }	
			//把tail逆序		
//			printf("%s\n",tail);
		    for(i=0;i<len1;i++)
		    {
			    k=0;
			    for(j=i;j<i+len2;j++)
			    {
				    flag=1;
				    if(tail[j]!=sb[k])
				    {
					    flag=0;
					    break;
				    }
				    k++;
		    	}
			    if(flag) break;
		    }			
		}
//		printf("flag=%d ",flag);
		if(flag) printf("Yes\n");
		else     printf("No\n");
	}
}
