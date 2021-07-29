#include <stdio.h>
int main(void)
{
	int n,question,i,j;
	int head,tail,k,min;
	int temp;
	scanf("%d %d",&n,&question);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(question--)
	{
		scanf("%d %d %d",&head,&tail,&k);
		head--;tail--;k--;
		for(i=head;i<=tail-1;i++)
		{
			min=i;
			for(j=i+1;j<=tail;j++)
			{
				if(a[j]<a[min]) min=j;
			}
			if(min!=j)
			{
				temp=a[j];
				a[j]=a[min];
				a[min]=temp;
			}
		}   //用选择排序法将第head个到第tail个数排序 
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		printf("%d\n",a[head+k]);
	}
}
