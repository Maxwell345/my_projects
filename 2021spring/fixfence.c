#include <stdio.h>
#define maxn 1500
int maxd,sum;
int d[maxn];
int ans[maxn];
int map[maxn][maxn];
int max(int x,int y)
{
	return x>y?x:y;
}
void search(int v)
{
	int i;
    for(i=1;i<=maxd;i++)
    {
        if(map[v][i]>0)
        {
            map[v][i]--;
            map[i][v]--;
            search(i);
        }
    }
    sum++;
    ans[sum]=v;
}
int main()
{
    int x,y,i;
	int n;
	n=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        map[x][y]++;
        map[y][x]++;
        d[x]++;
        d[y]++;
        maxd=max(max(maxd,x),y);
    }
    int find=0;
    for(i=1;i<=maxd;i++)
    if(d[i]%2==1)
    {
        find=i;
        break;
    }
    if(find==0)
    {
        for(i=1;i<=maxd;i++)
        if(d[i])
        {
            find=i;
            break;
        }
    }
    search(find);
    for(i=sum;i>=1;i--){
    	printf("%d\n",ans[i]);
	}
    return 0;
}
