def f(n,m):
    if n>m:
        return 0
    if n%2==1:
        print(n,end=' ')
    f(n+1,m)
n,m=map(int,input().split())
f(n,m)