#include <stdio.h>
int n;
int queue[1003];
int ans[103];
int main()
{
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n; ++i)
		queue[i] = i;
	int l = 1, r = n;
	for (i = 1; i <= n; ++i)
	{
		++r;
		if(r > n) r -= n;
		queue[r] = queue[l];
		++l;
		if(l > n) l -= n;
		ans[queue[l]] = i;
		++l;
		if(l > n) l -= n;
	}
	for (i = 1; i <= n; ++i)
		printf("%d ", ans[i]);
	return 0;
}
