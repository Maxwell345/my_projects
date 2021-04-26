#include <iostream>
using namespace std;
typedef struct{
	int t1;
	int t2;
}total;
int main()
{
	int i,max;
	total hours[7];
	for(i=0;i<7;i++)
	{
		cin>>hours[i].t1>>hours[i].t2;
	}
	max=0;
	for(i=1;i<7;i++)
	{
		if(hours[i].t1+hours[i].t2>hours[max].t1+hours[max].t2) max=i;
	}
	if(hours[max].t1+hours[max].t2>8) cout<<max+1<<"\n";
	else cout<<0<<"\n";
}
