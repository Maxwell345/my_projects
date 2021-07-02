#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=10;i<=1000;i++){
		if(i%2==0&&i%3==0&&i%7==0) cout<<i<<endl;
	}
}
