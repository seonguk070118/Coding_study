n=int(input())
a=[int(input()) for i in range(n)]
b=[0]*n
if len(a)<=2:
    print(sum(s))
else:
    b[0]=a[0]
    b[1]=a[0]+a[1]
    for i in range(2,n):
        b[i]=max(b[i-3]+a[i-1]+a[i],b[i-2]+a[i])
print(b[-1])