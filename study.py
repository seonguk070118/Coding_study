a=int(input())
sum=0.0
b=list(map(float,input().split()))
m=max(b)
for i in range(a):
    sum=sum+(b[i]/m*100)
print(sum/a)