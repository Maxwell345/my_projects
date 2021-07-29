#include <stdio.h>
void ShowArray(int data[],int size)
{
	int I,J;
	printf("%d",data[0]);
	for(I=1;I<size;I++)
	{
		printf(" %d",data[I]);
	}
	printf("\n");
	
}
int main(void)
{
	int len,i,j,temp;
	while(1)
	{
		scanf("%d",&len);
		int a[len];
		for(i=0;i<len;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=len-1;i>=0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];a[j]=a[j+1];a[j+1]=temp;
				}
			}
		}
		
		ShowArray(a,len);
	}
	
}
