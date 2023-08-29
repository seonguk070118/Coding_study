n=int(input())
a=[int(x) for x in input().split()]
min=10000
for i in range(0,n):
    if(a[i]<min):
        min=a[i]
print(min)