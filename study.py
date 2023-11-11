a,b,c=map(int,input().split())
m=min(a,b,c)
for i in range(1,m+1):
    if a%i==0 and b%i==0 and c%i==0:
        s=i
print(s)