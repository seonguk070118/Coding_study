n,m=map(int,input().split())
l=[0 for i in range(1,n+21)]
for i in range(m):
    a,b,c=map(int,input().split())
    for j in range(a,b+1):
        l[j] = c
for i in range(1,n+1):
    print(l[i],end=' ')