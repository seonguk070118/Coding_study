n,m=map(int,input().split())
b=[]
for i in range(n):
    a=list(map(int,input().split()))
    b.append(a)

c=[]
for i in range(n):
    d=list(map(int,input().split()))
    c.append(d)

for i in range(n):
    for j in range(m):
        print(b[i][j]+c[i][j],end=' ')
    print()