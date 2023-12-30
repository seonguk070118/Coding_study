import sys
n,m=map(int,input().split())
l=[i for i in range(1,n+1)]
for i in range(m):
    k=0
    a,b=map(int,input().split())
    l2=l[a-1:b]
    l2.reverse()
    for j in range(a-1,b):
        l[j]=l2[k]
        k+=1

for i in l:
    print(i,end=' ')