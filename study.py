n=int(input())
a=[[0 for j in range(1,n+2)] for i in range(1,n+2)]
b=0
for i in range(1,n+1):
    for j in range(1,n+1):
        a[i][j]=i+(n*b)
        b+=1
    b=0

for i in range(1,n+1):
    for j in range(1,n+1):
        print(a[i][j],end=' ')
    print()
