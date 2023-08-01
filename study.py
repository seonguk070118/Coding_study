a,b=input().split()
a=int(a)
b=int(b)
if b<45:
    a-=1
    b=b+60-45
else:
    b-=45
if a<0:
    a+=24
print(a,end=' ')
print(b)