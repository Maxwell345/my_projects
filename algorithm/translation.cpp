#include <cstdio>
#include <iostream>
using namespace std;
typedef struct{
	int data[100];
	int head,tail,size;
}queue;
queue dict;
int main()
{
	int m,n,check;
	int pasg,i,j,find;
	dict.head=0;dict.tail=-1;dict.size=0;
	scanf("%d%d",&m,&n);
	check=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&pasg);
		find=0;
		for(j=dict.head;j<=dict.tail;j++)
		{
			if(dict.data[j]==pasg){
				find=1;
				break;
			}
		}
		if(!find){
			check++;
			dict.tail++;
			if(dict.tail>=m){
				dict.tail-=m;
			}
			dict.size++;
			if(dict.size>m){
				dict.head++;
				if(dict.head>=m) dict.head-=m;
			}
			dict.size--;
			dict.data[dict.tail]=pasg;
		}
	}
	cout<<check<<endl;
}
