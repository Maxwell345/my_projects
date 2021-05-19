#include <stdio.h>
#define MAXVER 100
#define MAXEDG 4950
typedef struct{
	int begin;
	int end;
	int weight;
}Edge;
int parent[MAXVER];
Edge edges[MAXEDG];
int Find(int *parent,int f)
{
	while(parent[f]>0){
		f=parent[f];
	}
	return f;
}
int main()
{
	int numvtx,numedg,i,price;
	int j,emin,n,m;
	Edge t;
	scanf("%d %d",&numvtx,&numedg);
	for(i=0;i<numedg;i++)
	{
		scanf("%d %d %d",&edges[i].begin,&edges[i].end,&edges[i].weight);
	}
	for(i=0;i<numedg;i++)
	{
		emin=i;
		for(j=i+1;j<numedg;j++)
		{
			if(edges[j].weight<edges[emin].weight) emin=j;
		}
		if(emin!=i)
		{
			t=edges[i];edges[i]=edges[emin];edges[emin]=t;
		}
	}
	price=0;
	for(i=0;i<numedg;i++)
	{
		n=Find(parent,edges[i].begin);
		m=Find(parent,edges[i].end);
		if(n!=m)
		{
			parent[n]=m;
			price+=edges[i].weight;
		}
	}
	printf("%d\n",price);
}
