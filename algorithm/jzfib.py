def quick_fib(n):
    ta, tb, tc, td = 1, 0, 0, 1
    a,b,c,d = 1,1,1,0

    while n != 0:
        if n & 1 == 1:
            ta,tb,tc,td = ta*a+tb*c,ta*b+tb*d,tc*a+td*c,tc*b+td*d
        a, b, c, d = a * a + b * c, a * b + b * d, c * a + d * c, c * b + d * d
        n >>= 1
    return tb
x=0
while x>=0:
    x=int(input("input x:"))
    if x>=0:print("fib(x)=%d"%quick_fib(x))