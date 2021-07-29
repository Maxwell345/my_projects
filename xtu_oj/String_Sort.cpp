#include <stdio.h>
int main(void)
{
	int i;
	char s1[1001],s2[1001],s3[1001];
	scanf("%s",&s1);
	scanf("%s",&s2);
	scanf("%s",&s3);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0'&&s3[i]!='\0';i++)
	{
		if(s1[i]<=s2[i]&&s2[i]<=s3[i])
		{
			printf("%s\n%s\n%s\n",s1,s2,s3);
			break;
		}
		else if(s1[i]<=s3[i]&&s3[i]<=s2[i])
		{
			printf("%s\n%s\n%s\n",s1,s3,s2);
			break;
		}
		else if(s2[i]<=s1[i]&&s1[i]<=s3[i])
		{
			printf("%s\n%s\n%s\n",s2,s1,s3);
			break;
		}
		else if(s2[i]<=s3[i]&&s3[i]<=s1[i])
		{
			printf("%s\n%s\n%s\n",s2,s3,s1);
			break;
		}
		else if(s3[i]<=s1[i]&&s1[i]<=s2[i])
		{
			printf("%s\n%s\n%s\n",s3,s1,s2);
			break;
		}
		else if(s3[i]<=s2[i]&&s2[i]<=s1[i])
		{
			printf("%s\n%s\n%s\n",s3,s2,s1);
			break;
		}
	}
}
