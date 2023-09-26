n=int(input())
a=list(map(int,input().split()))
b=list(a)
c=list(range(n))
for i in range(n):
    c[i]=max(a)
    a.remove(c[i])

for i in b:
    print(i,end=' ')
    print(c.index(i)+1)