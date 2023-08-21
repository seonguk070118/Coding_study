a=int(input())
a=a-2
sum1=1
sum2=1
sum=1
for i in range(a):
    sum=sum1+sum2
    sum1=sum2
    sum2=sum
print(sum)