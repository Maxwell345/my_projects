#include <stdio.h>

#include <stdlib.h>

int N,a,b;

int main()

{scanf("%d",&N);

    while(N--)

    {

        scanf("%d%d",&a,&b);

        if(a==0||b==0)

            printf("%d\n",0);

        else if(a>2*b) 

            printf("%d\n",b);

        else if(b>2*a) 

            printf("%d\n",a);

        else  printf("%d\n",(a+b)/3);

    }



}

