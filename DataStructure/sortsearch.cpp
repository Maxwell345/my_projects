#include <cstdio>
#include <iostream>
using namespace std;
int data[1000];
void insert(int *arr,int size)
{
	int i,j,t;
	for(i=1;i<size;i++)
	{
		t=arr[i];
		j=i-1;
		while(j>=0&&t<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=t;
	}
}
int bisearch(int *rec,int key,int low,int high)
{
	int mid;
	mid=(low+high)/2;
	if(low>high) return -1;
	else
	{
		if(key=rec[mid])	  return mid;
		else if(key<rec[mid]) return bisearch(rec,key,low,mid-1);
		else 				  return bisearch(rec,key,mid+1,high);
	}
}
int main()
{
	int n,i,find;
	cin>>n;
	for(i=1;i<=n;i++){
		scanf("%d",&data[i]);
	}
	insert(data,n);
	scanf("%d",&find);
	cout<<bisearch(data,find,1,n)<<endl;
}
