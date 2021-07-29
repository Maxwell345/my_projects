#include <stdio.h>
#include <string.h>
/*问题描述：
 * 输入n和m，代表n个节点，m条边，然后是m行输入，每行有x,y,z，代表x到y的路距离为z。
 * 问题：从1出发到各点的最短路径。
 * 测试样例：
7 12
1 2 20
1 3 50
1 4 30
2 3 25
2 6 70
3 4 40
3 6 50
3 5 25
4 5 55
5 6 10
5 7 70
6 7 50
 */
#define maxn 100
int map[maxn][maxn];
int dis[maxn];
int path[maxn];
int vis[maxn];//记录更新过的点
int n;
void dijk(int s)
{
	int j,k;
    //初始化
    memset(path,-1,sizeof(path));
    /*INF使用0x3f3f3f3f的好处：
     * 1：满足无穷大加一个有穷的数依然是无穷大（在DijKstra算法松弛操作中避免了溢出而出现负数）
     * 2：满足无穷大加无穷大依然是无穷大（两个0x3f3f3f3f相加并未溢出）
     * 3：初始化时，由于每一个字节为0x3f，所以只需要memset（buf，0x3f,sizeof(buf)）即可
     */
    memset(dis,0x3f,sizeof(dis)); //初始化为无穷大
    memset(vis,0,sizeof(vis));
    dis[s] = 0; //自身到自身的距离为0
    while(k)
    {
        k = 0;
        for(j = 1; j <= n; j++)
        {
            if(!vis[j]&&dis[j]<dis[k])//找未收录顶点中dis值最小的
                k=j; //这里第一次找到的是起点
        }//没有未收录的点，则返回
        vis[k] = 1;
        //松弛操作
        for(j = 1; j <= n; j++)
        {
            //第一次循环只有起点的邻接点距离被更新，每次都更新新找到的点的邻接点
            if(dis[j]>dis[k]+map[k][j])
            {
                dis[j]=dis[k]+map[k][j];
                path[j]=k;//路径被改变，重新记录前驱，最短路是由最短路+某一条固定路组成，所以前驱是有效的
            }
        }
    }
}

void print(int x)//x为终点
{
    if(x == -1) return;
    //递归
    print(path[x]);
    printf("%d->",x);
}
int main()
{
    int m,x,y,z;
	int i,order;
    scanf("%d%d",&n,&m);
    memset(map,0x3f,sizeof(map));
    for( i = 0; i < m; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        map[x][y] = z;
    }
    dijk(1);
    scanf("%d",&order);//order为终点
    print(path[order]);
    printf("%d\n",order);
    //打印最短距离
    printf("%d\n",dis[order]);
    return 0;
}
