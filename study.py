n=int(input())
a=list(map(int,input().split()))
for j in range(n):
    for i in range(n):
        print(a[i],end=' ')
    print()
    b=a.pop(0)
    a.append(b)