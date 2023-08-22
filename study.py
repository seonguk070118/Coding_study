a=int(input())
sum=0
for i in range(1,a):
    sum+=i
    if sum>=a:
        print(i)
        break