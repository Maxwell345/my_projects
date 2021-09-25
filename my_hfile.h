int fact(int n)
{
	return n<=0?1:n*fact(n-1);
}
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
