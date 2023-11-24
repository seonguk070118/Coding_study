n=int(input())
a=[[0 for j in range(1,n+2)] for i in range(1,n+2)]
b=n
for i in range(1,n+1):
    b=n*i
    for j in range(1,n+1):
        a[i][j]=b
        b-=1
    

for i in range(1,n+1):
    for j in range(1,n+1):
        print(a[i][j],end=' ')
    print()