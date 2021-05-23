#include <cstdio>
#include <iostream>
using namespace std;
#define MAXSIZE 30000
int data[MAXSIZE];
int cnt[MAXSIZE];
void fill(int *arr,int obj,int from,int dist)
{
	int j;
	for(j=from;j<from+dist;j++){
		arr[j]=obj;
	}
}
int main()
{
	int n,i,minv,maxv;
	int pos,q;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>data[i];
		}
		minv=data[0];maxv=data[0];
		for(i=1;i<n;i++)
		{
			if(data[i]>maxv) maxv=data[i];
			if(data[i]<minv) minv=data[i];
		}
		for(i=minv;i<maxv;i++){
			cnt[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cnt[data[i]]++;
		}
		pos=0;
		for(i=minv;i<=maxv;i++){
			q=cnt[i];
			fill(data,i,pos,q);
			pos+=q;
		}
		for(i=0;i<n;i++){
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
}
