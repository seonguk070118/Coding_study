a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
if a==b==c:
    sum=10000+(a*1000)
elif a==b!=c:
    sum=1000+(a*100)
elif a!=b==c:
    sum=1000+(b*100)
elif a==c!=b:
    sum=1000+(c*100)
else:
    if a>b:
        max=a
    else:
        max=b
    if max>c:
        sum=max*100
    else:
        sum=c*100
print(sum)