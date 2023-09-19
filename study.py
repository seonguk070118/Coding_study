n=int(input())
a=list(map(int,input().split()))
for i in range(n):
    for j in range(i,n+i):
        print(a[j%n],end=' ')
    print()