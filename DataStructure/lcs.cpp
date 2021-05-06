#include <iostream>
using namespace std;
int cell[2000][1000];
int main()
{
	char a[2000];
	char b[1000];
	int i,j,lcs;
	int mx,my;
	cin>>a>>b;
	for(i=1;a[i];i++)
	{
		for(j=1;b[j];j++)
		{
			if(a[i]==b[j]) cell[i][j]=cell[i-1][j-1]+1;
		}
	}
	lcs=cell[1][1];mx=1;my=1;
	for(i=1;a[i];i++)
	{
		for(j=1;b[j];j++)
		{
			if(cell[i][j]>lcs)
			{
				lcs=cell[i][j];
				mx=i;my=j;
			}
		}
	}
	cout<<lcs<<" "<<"\n";
	for(i=mx-lcs+1;i<=mx;i++)
	{
		cout<<a[i];
	}
}
