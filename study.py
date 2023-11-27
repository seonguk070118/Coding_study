n=int(input())
a=[[0 for j in range(1,n+2)] for i in range(1,n+2)]
b=n
for i in range(n):
    for j in range(n):
        a[i][j]=n+(j*n)-i

for i in range(n):
    for j in range(n):
        print(a[i][j],end=' ')
    print()
