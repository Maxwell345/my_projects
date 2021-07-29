#include <stdio.h>
void inputArray(int a[],int len)
{
	int I;
	for(I=0;I<len;I++)
	{
		scanf("%d",&a[I]);
	}
}
void showArray (int a[],int len)
{
	int J;
		printf("%d",a[0]);
	for(J=1;J<len;J++)
	{
		printf(" %d",a[J]);
	}
	printf("\n");
}
int main(void)
{
	int size,i,j,temp;
	while(scanf("%d",&size)!=EOF)
	{
		int data[size];
		inputArray(data,size);
		for(i=1;i<size;i++)
		{
			temp=data[i];
			j=i-1;
			while(j>=0&&temp<data[j])
			{
				data[j+1]=data[j];
				j--;
			}
			data[j+1]=temp;
		}
		showArray(data,size);
	}
	
}
