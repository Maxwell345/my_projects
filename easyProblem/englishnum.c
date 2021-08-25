#include <stdio.h>
char base[19][30]={"one","two","three","four","five","six","seven","eight","nine","ten",
					"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
					"eighteen","nineteen"};
char dozen[8][30]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
void hundr(int b)
{
	if(b/100>=1){
		printf("%s hundred ",base[b/100-1]);
		if((b%100)/10>=2) printf("and ");
	}
	if((b%100)/10>=2){
		printf("%s ",dozen[(b%100)/10-2]);
	}
	if((b%100)%10>=1) printf("%s",base[(b%100)%10-1]);
}
void getans(int a)
{
	if(a>999999||a<=0) printf("sorry,please input a number in the range of 1-999999");
	else if(a>999){
		hundr(a/1000);
		printf(" thousand ");
	}
	hundr(a%1000);
}
int main()
{
	int num;
	while(scanf("%d",&num)!=EOF){
		getans(num);printf("\n");
	}
}
