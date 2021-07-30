#include <iostream>
#include <algorithm>
using namespace std;
int cell[101][101];
int main()
{
	int n,i,j,ans;
	int a[101];int b[101];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
	ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i]==b[j]) cell[i][j]=cell[i-1][j-1]+1;
			else           cell[i][j]=max(cell[i-1][j],cell[i][j-1]);
			if(cell[i][j]>ans) ans=cell[i][j];
		}
	}
	cout<<ans<<endl;
}
