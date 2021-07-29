#include <stdio.h>
#include <string.h>
int main()
{
	int k,i,j,L;
	scanf("%d",&k);
	getchar();
	while(k--)
	{
		j=0;L=0;i=0;
		char s1[13],s2[13];
		scanf("%s%s",&s1,&s2);
		
		getchar();
		j=strlen(s2)-1;
		L=strlen(s1)-1;
		
		while(j>=0)
		{
			printf("%c",s1[i]);
			printf("%c",s2[j]);
			i++;
			j--;
		}
		printf("%c\n",s1[L]);
		
	}
}
