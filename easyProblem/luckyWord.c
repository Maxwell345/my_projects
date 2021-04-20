#include <stdio.h>
int cnt[26];
int isPrime(int n)
{
	if(n==1||n==0) return 0;
	int j;
	for(j=2;j*j<=n;j++)
		if(n%j==0) return 0;
	return 1;
}
int main()
{
	int maxn,minn,i,k;
	char word[100];
	scanf("%s",&word);
	for(i=0;word[i]!='\0';i++)
	{
		k=word[i]-'a';
		cnt[k]+=1;
	}
	for(i=0;i<26;i++)
	{
		if(cnt[i]!=0)
		{
			maxn=cnt[i];
			minn=cnt[i];
			break;
		}
	}
	/*all of cnt
	for(i=0;i<26;i++)
	{
		printf("%d ",cnt[i]);
	}
	printf("\n");
	*/
	for(i=1;i<26;i++)
	{
		if(cnt[i]!=0&&cnt[i]<minn) minn=cnt[i];
		if(cnt[i]>maxn) maxn=cnt[i];
	}
	if(isPrime(maxn-minn)) printf("Lucky Word\n%d\n",maxn-minn);
	else 				   printf("No Answer\n%d\n",0);
}
