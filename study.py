n=list(map(int,input().split()))
for i in range(3):
    print(min(n),end=' ')
    n.remove(min(n))