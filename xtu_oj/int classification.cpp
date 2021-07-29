#include <stdio.h>
#include <string.h>
#include <cstdlib>
int integer(char str[]){
    int i,num;
    num=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]<='9'&&str[i]>='0')
		{
           num=num*10+str[i]-'0';
        }
        else continue;
        
    }
    return num;
}                            //定义一个把字符串转换成整数的函数integer           
int main(void)
{
	int i,sum;
	char s[501];
	while(scanf("%s",&s)!=EOF)
	{
		if(strcmp(s,"0")==0) break;
	

	    int n=strlen(s);
	    if(n==1)  printf("%d\n",integer(s));
	    else
	    {
		    while(n>1)
		    {
			    sum=0;
			    for(i=0;i<n;i++)
			    {
				    sum+=(s[i]-48);
			    }                                       //各位数字之和 
			    itoa(sum,s,10);
			    n=strlen(s);
			    /*printf("%d\n",n);
			    printf("%d\n",sum);*/
		    }
		    printf("%d\n",integer(s));
	    }
	}
}
