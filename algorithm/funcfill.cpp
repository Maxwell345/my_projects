#include <iostream>
#include <algorithm>
using namespace std;
int arr[20];
int main()
{
	int i,b;
	for(i=0;i<20;i++)
		cout<<arr[i]<<" ";
	cin>>b;
	fill(arr,arr+5,b);
	for(i=0;i<20;i++)
		cout<<arr[i]<<" ";
	for(i=0;i<20;i++)
		arr[i]=i;
	for(i=0;i<20;i++)
		cout<<arr[i]<<" ";
	cin>>b;
	fill(arr,arr+5,b);
	for(i=0;i<20;i++)
		cout<<arr[i]<<" ";
}
