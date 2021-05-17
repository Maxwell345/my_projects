#include <iostream>
#include <cstring>

using namespace std;
int cell[2000][1000];
int main()
{
	char a[2000];
	char b[1000];
	int i,j,lcs;
	int asize,bsize;
	cin>>a>>b;
	asize=strlen(a);bsize=strlen(b);lcs=0;
	for(i=1;i<=asize;i++)
	{
		for(j=1;j<=bsize;j++)
		{
			if(a[i-1]==b[j-1]) cell[i][j]=cell[i-1][j-1]+1;
			
			if(cell[i][j]>lcs) lcs=cell[i][j];
		}
	}
	cout<<lcs<<endl;
}
