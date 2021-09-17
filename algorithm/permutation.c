#include <stdio.h>
int shed[100];
void permutation(int n,int* A,int cur)
{
	int i,j,ok;
	if(cur==n){
		for(i=0;i<n;i++) printf("%d ",A[i]);
		printf("\n");
	}
	else for(i=1;i<=n;i++){
		ok=1;
		for(j=0;j<cur;j++)
			if(A[j]==i) ok=0;
		if(ok){
			A[cur]=i;
			permutation(n,A,cur+1);
		}
	}
}
int main()
{
	int size;
	scanf("%d",&size);
	permutation(size,shed,0);
}
