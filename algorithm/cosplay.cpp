#include <iostream>
#define SIZE 1000015
using namespace std;
typedef struct{
	int begin,end;
}agenda;
agenda race[SIZE];
void swap(agenda *x,agenda *y)
{
	agenda t;
	t=*x;*x=*y;*y=t;
}
int main()
{
	int n,i,j,cnt=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>race[i].begin>>race[i].end;
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(race[j].end>race[j+1].end) swap(&race[j],&race[j+1]);
		}
	}
	int now=0;
	for(i=0;i<n;i++){
		if(race[i].begin>=now)
		{
			cnt++;
			now=race[i].end;
		}
	}
	cout<<cnt<<endl;
}
