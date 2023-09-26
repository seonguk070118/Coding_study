n=int(input())
s=0
for i in range(n+1):
    s+=i
i=1
while s>0:
    for j in range(0,i):
        print(s,end=' ')
        s-=1
    i+=1
    print()