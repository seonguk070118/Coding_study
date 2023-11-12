a=int(input())
s=0
for i in range(1,11):
    s=s+(a%10)
    a=a//10
if s%7==4:
    print('suspect')
else:
    print('citizen')