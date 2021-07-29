#include <stdio.h>
#include <string.h>
int main()
{
	int k,i,flag;
	char key[32][10]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern"
,"float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	char s[35];
	scanf("%d",&k);
	while(k--)
	{
		flag=1;
		scanf("%s",&s);
		if(s[0]>='0'&&s[0]<='9') flag=0;
		else
		{
			for(i=0;i<32;i++)
			{
				if(strcmp(key[i],s)==0)
				{
					flag=0;
					break;
				}
			}
		}
		
		
		for(i=0;s[i]!=0;i++)
		{
			if((s[i]<48||s[i]>57)&&(s[i]<65||s[i]>90)&&(s[i]<97||s[i]>122)&&s[i]!=95)
			{
				flag=0;
				break;
			}
			/*s[i]不是数字且不是大写字母且不是小写字母且不是下划线*/
		}
		
		if(flag) printf("Yes\n");
		else     printf("No\n");
	}
}
