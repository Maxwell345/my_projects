#include <iostream>
#include <cstring>
using namespace std;
void getnext(char *T,int *next)
{
	int k,j,length;
	k=0;j=-1;length=strlen(T);
	next[0]=-1;
	while(k<length)
	{
		if(j==-1||T[k]==T[j]) {++k;++j;next[k]=j;}
		else                  j=next[j];
	}
}
int kmp(char *S,char *T,int *next)
{
	int i,j,n,m;
	i=0;j=0;n=strlen(S);m=strlen(T);
	while(i<n&&j<m){
		if(j==-1||S[i]==T[j])
		{
			i++;j++;
		}
		else j=next[j];
	}
	if(j>=m) return i-j;
	else     return -1;
}
int main(void)
{
	char text[2000];
	char target[100];
	int tgtnext[100];
	int pos,idx;
	cin>>text>>target;
	getnext(target,tgtnext);
	pos=kmp(text,target,tgtnext);
	cout<<pos<<endl;
	for(idx=pos-2;idx<pos+strlen(target)+2;idx++)
	{
		printf("%c",text[idx]);
	}
	cout<<endl;
	return 0;
}
