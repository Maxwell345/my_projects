#include <iostream>
using namespace std;
int next(int pos,int size)
{
	if(pos==size) return 1;
	return pos+1;
}
int main()
{
	int n,m,cycle;
	int b,g;
	cin>>n>>m>>cycle;
	b=1;g=1;
	while(cycle--)
	{
		cout<<b<<" "<<g<<endl;
		b=next(b,n);
		g=next(g,m);
	}
}
