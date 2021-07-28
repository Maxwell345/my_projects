#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[20];
int n,m,t;
int main()
{
	int i,ans,left,right;
	int head,tail;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		left=0;right=n-1;ans=1;
		while(m>0){
			if(m>=2){
				head=a[left]*a[left+1];
				tail=a[right]*a[right-1];
				if(head>=tail){
					ans*=head;
					head+=2;
					m-=2;
				}
				else{
					ans*=a[right--];
					tail--;
					m--;
				}
			}
			else{
				ans*=a[right--];
				tail--;
				m--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
