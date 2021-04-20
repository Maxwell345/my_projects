#include <stdio.h>
#define SIZE 1003
int n;
int queue[1003];
int ans[1003];
int main(void)
{
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n; ++i)
		queue[i] = i;
	int l = 1, r = n;
	for (i = 1; i <= n; ++i)
	{
		r=(r+1)%SIZE;
		queue[r] = queue[l];
		l=(l+1)%SIZE;
		ans[queue[l]] = i;
		l=(l+1)%SIZE;
	}
	for (i = 1; i <= n; ++i)
		printf("%d ", ans[i]);
	return 0;
}
