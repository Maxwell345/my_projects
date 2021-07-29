#include <stdio.h>
#include <string.h>
/*����������
 * ����n��m������n���ڵ㣬m���ߣ�Ȼ����m�����룬ÿ����x,y,z������x��y��·����Ϊz��
 * ���⣺��1��������������·����
 * ����������
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
int vis[maxn];//��¼���¹��ĵ�
int n;
void dijk(int s)
{
	int j,k;
    //��ʼ��
    memset(path,-1,sizeof(path));
    /*INFʹ��0x3f3f3f3f�ĺô���
     * 1������������һ�����������Ȼ���������DijKstra�㷨�ɳڲ����б�������������ָ�����
     * 2�������������������Ȼ�����������0x3f3f3f3f��Ӳ�δ�����
     * 3����ʼ��ʱ������ÿһ���ֽ�Ϊ0x3f������ֻ��Ҫmemset��buf��0x3f,sizeof(buf)������
     */
    memset(dis,0x3f,sizeof(dis)); //��ʼ��Ϊ�����
    memset(vis,0,sizeof(vis));
    dis[s] = 0; //��������ľ���Ϊ0
    while(k)
    {
        k = 0;
        for(j = 1; j <= n; j++)
        {
            if(!vis[j]&&dis[j]<dis[k])//��δ��¼������disֵ��С��
                k=j; //�����һ���ҵ��������
        }//û��δ��¼�ĵ㣬�򷵻�
        vis[k] = 1;
        //�ɳڲ���
        for(j = 1; j <= n; j++)
        {
            //��һ��ѭ��ֻ�������ڽӵ���뱻���£�ÿ�ζ��������ҵ��ĵ���ڽӵ�
            if(dis[j]>dis[k]+map[k][j])
            {
                dis[j]=dis[k]+map[k][j];
                path[j]=k;//·�����ı䣬���¼�¼ǰ�������·�������·+ĳһ���̶�·��ɣ�����ǰ������Ч��
            }
        }
    }
}

void print(int x)//xΪ�յ�
{
    if(x == -1) return;
    //�ݹ�
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
    scanf("%d",&order);//orderΪ�յ�
    print(path[order]);
    printf("%d\n",order);
    //��ӡ��̾���
    printf("%d\n",dis[order]);
    return 0;
}
