#include <stdio.h>
float myfloat(int m)
{
	int t;
	float q=0.00;
	t=m;
	while(t--){
		q+=1.00;
	}
	return q;
}
int main()
{
	int z[3];
	scanf("%d%d%d",&z[0],&z[1],&z[2]);
	printf("standard:    %f  %f  %f\n",(float)z[0],(float)z[1],(float)z[2]);
	printf("my function: %f  %f  %f\n",myfloat(z[0]),myfloat(z[1]),myfloat(z[2]));
}
