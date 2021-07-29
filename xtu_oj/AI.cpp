#include <stdio.h>
#include <string.h>
int main()
{
	char s[200];
	int i,j,length,length2;
	int flag;
	while(1)
	{
		flag=1;
		gets(s);
		length=strlen(s);
		if(strcmp(s,"Goodbye.")==0||strcmp(s,"Byebye.")==0||strcmp(s,"Bye-bye.")==0||strcmp(s,"Bye.")==0||strcmp(s,"Sorry but I have to leave.")==0)
		{
			printf("Bye-bye.");
			break;
		}
		for(i=2;s[i]!='\0';i++)
		{
			if(s[i]=='C')
			{
				printf("AI: No.\n\n");
				flag=0;
				break;
			} 
		}
		if(flag==0) continue;
		
		if(s[0]=='C'&&s[1]=='a'&&s[2]=='n'&&s[3]==' '&&s[4]=='y'&&s[5]=='o'&&s[6]=='u')
		{
			s[0]='I';s[1]=' ';s[2]='c';s[3]='a';s[4]='n';
			for(i=5;s[i]!='\0';i++)
			{
				s[i]=s[i+2];
			}
		}
		
		if(s[0]=='C'&&s[1]=='o'&&s[2]=='u'&&s[3]=='l'&&s[4]=='d'&&s[5]==' '&&s[6]=='y'&&s[7]=='o'&&s[8]=='u')
		{
		    s[0]='I';s[1]=' ';s[2]='c';s[3]='a';s[4]='n';
			for(i=5;s[i]!='\0';i++)
			{
				s[i]=s[i+4];
			}	
		}
		
		if(s[0]=='A'&&s[1]=='r'&&s[2]=='e'&&s[3]==' '&&s[4]=='y'&&s[5]=='o'&&s[6]=='u')
		{
			s[0]='I';s[1]=' ';s[2]='a';s[3]='m';
			for(i=4;s[i]!='\0';i++)
			{
				s[i]=s[i+3];
			}
		}
		
		if(s[0]=='D'&&s[1]=='o'&&s[2]==' '&&s[3]=='y'&&s[4]=='o'&&s[5]=='u')
		{
			s[0]='I';
			for(i=1;s[i]!='\0';i++)
			{
				s[i]=s[i+5];
			}
		}
		
		for(i=1;s[i]!='\0';i++)
		{
			if(s[i]==' '&&s[i+1]=='I'&&s[i+2]==' ')
			{
				for(j=length+2;j>=i+4;j--)
				{
					s[j]=s[j-2];
				}
				s[i+1]='y';s[i+2]='o';s[i+3]='u';
			}
			else if(s[i]==' '&&s[i+1]=='m'&&s[i+2]=='e'&&(s[i+3]==' '||s[i+3]=='?'))
			{
				for(j=length+1;j>=i+4;j--)
				{
					s[j]=s[j-1];
				}
				s[i+1]='y';s[i+2]='o';s[i+3]='u';
			}
			else if(s[i]==' '&&s[i+1]=='I'&&s[i+2]=='\''&&s[i+3]=='m'&&s[i+4]==' ')
			{
				for(j=length+3;j>=i+7;j--)
				{
					s[j]=s[j-3];
				}
				s[i+1]='y';s[i+2]='o';s[i+3]='u';s[i+4]='\'';s[i+5]='r';s[i+6]='e';
			}
			else if(s[i]==' '&&s[i+1]=='m'&&s[i+2]=='y'&&s[i+3]==' ')
			{
				for(j=length+2;j>=i+5;j--)
				{
					s[j]=s[j-2];
				}
				s[i+1]='y';s[i+2]='o';s[i+3]='u';s[i+4]='r';
			}
			else if(s[i]==' '&&s[i+1]=='y'&&s[i+2]=='o'&&s[i+3]=='u'&&s[i+4]=='r'&&s[i+5]==' ')
			{
				s[i+1]='m';s[i+2]='y';s[i+3]=' ';
				for(j=i+4;s[j]!='\0';j++)
				{
					s[j]=s[j+2];
				}
			}
		}
		
		length2=strlen(s);
		if(s[length2-1]=='?') s[length2-1]='!';
		
		printf("AI: ");
		puts(s);
		printf("\n");
	}
}  
