#include <stdio.h>
typedef struct node{
	int value;
	int next;
} Data;
int main()
{
	int size,first,i,t;
	scanf("%d %d",&size,&first);
	Data array[size];
	for(i=0;i<size;i++)
	{
		scanf("%d %d",&array[i].value,&array[i].next);
	}
	printf("%d",array[first-1].value);
	i=array[first-1].next;
	t=size-1;
	while(t--)
	{
		printf(" %d",array[i-1].value);
		i=array[i-1].next;
	}
}
