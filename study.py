n=int(input())
a=[int(x) for x in input().split()]
b=list(0 for _ in range(24))
for i in a:
    b[i]+=1

for i in range(1,24):
    print(b[i],end=' ')