#include <cstdio>
#include <iostream>
using namespace std;
float atomass(char c)
{
	if(c=='C') return 12.01;
	if(c=='H') return 1.008;
	if(c=='O') return 16.00;
	if(c=='N') return 14.01;
}
int isdigit(char ch)
{
	if(ch>='0'&&ch<='9') return 1;
	return 0;
}
float stoint(char *str,int begin,int end)
{
	int temp,j;
	float sum;
	sum=0.0;
	for(j=begin;j<=end;j++)
	{
		temp=str[j]-48;
		sum=sum*10.0+(float)temp;
	}
	return sum;
}
int main()
{
	int i,l,r;
	float molmass;
	char atom;
	char name[100];
	scanf("%s",&name);
	i=0;molmass=0;
	while(name[i]!='\0')
	{
		atom=name[i];
		if(!name[i+1]||!isdigit(name[i+1]))
		{
			molmass+=atomass(atom);
			i++;
		}
		else
		{
			l=i+1;
			do{
				i++;
			}while(isdigit(name[i]));
			r=i-1;
			molmass+=atomass(atom)*stoint(name,l,r);
		}
	}
	cout<<molmass<<"\n";
}
