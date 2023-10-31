n=input()
print(int(n[::-1]))
sum=0
for i in str(n):
    sum=sum+int(i)
print(sum)