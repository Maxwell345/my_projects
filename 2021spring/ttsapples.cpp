#include <iostream>
using namespace std;
int apple[10];
int main()
{
	int chair=30,i,body,cnt=0;
	for(i=0;i<10;i++){
		cin>>apple[i];
	}
	cin>>body;
	for(i=0;i<10;i++){
		if(apple[i]<=body+chair) cnt++;
	}
	cout<<cnt<<endl;
}
