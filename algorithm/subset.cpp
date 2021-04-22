#include <cstdio>
using namespace std;
int set[30];
int main(void)
{
	int n,i,min,tp;
	int base,size,sub,j;
	size=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
	}
	size<<=n;
	base=size-1;
	/*sorting*/
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(set[j]<set[min]) min=j;
		}
		if(i!=min)
		{
			tp=set[i];
			set[i]=set[min];
			set[min]=tp;
		}
	}
	for(i=0;i<size;i++)
	{
		sub=i&base;
		printf("{");
		for(j=0;j<n;j++)
		{
			if(sub&1) printf("%d,",set[j]);
			sub>>=1;
		}
		
		printf(i?"\b}\n":"}\n");
		/*if the subset is not empty,delete the extra comma*/
	}
}
