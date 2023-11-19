n,m,d=input().split()
n=int(n)
m=int(m)
d=str(d)
a=n-1
b=1
if d=='R':
    for i in range(n):
        for j in range(a):
            print(end=' ')
        for j in range(m):
            print('*',end='')
        a-=1
        print()
elif d=='L':
    for i in range(n):
        for j in range(m):
            print('*',end='')
        print()
        for j in range(b):
            print(end=' ')
        b+=1