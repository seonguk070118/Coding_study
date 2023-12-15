n=int(input())
a=[]
sum=0
a=input().split()
m=input()
for i in a:
    if m==i:
        sum+=1
print(sum)