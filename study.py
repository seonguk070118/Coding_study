a,b=map(int,input().split())
c=0
while(a>=b):
    c+=1
    a-=b
    a+=1
print(c)