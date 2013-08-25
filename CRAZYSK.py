def foo(n,m,count):
    if n < m:
        return count
    else:
        count = count+n//m
        n = n%m + n//m
        return foo(n,m,count)

x=input()
x=int(x)
while (x>0):
    xx = input().split()
    n,m = list(map(int,xx))
    print(foo(n,m,n))
    x=x-1
