#include <stdio.h>
typedef struct{
	char name[30];
	int age;
}person;
int main()
{
	person a,b,c,temp;
	scanf("%s %d",&a.name,&a.age);
	scanf("%s %d",&b.name,&b.age);
	scanf("%s %d",&c.name,&c.age);
	printf("1 : %s %d\n",a.name,a.age);
	printf("2 : %s %d\n",b.name,b.age);
	printf("3 : %s %d\n",c.name,c.age);
	temp=a;a=c;c=temp;
	printf("1 : %s %d\n",a.name,a.age);
	printf("2 : %s %d\n",b.name,b.age);
	printf("3 : %s %d\n",c.name,c.age);
}
