#include <stdio.h>
typedef struct node{
	int value;
	int next;
} Data;
int main()
{
	int size,first,i,t;
	int j;
	scanf("%d %d",&size,&first);
	int temp[size];
	Data array[size];
	for(i=0;i<size;i++)
	{
		scanf("%d %d",&array[i].value,&array[i].next);
	}
	t=size;
	i=0;j=first;
	while(t--)
	{
		temp[i]=array[j-1].value;
		j=array[j-1].next;
		i++;
	}
	printf("%d",temp[size-1]);
	for(i=size-2;i>=0;i--)
	{
		printf(" %d",temp[i]);
	}
	printf("\n");
}
