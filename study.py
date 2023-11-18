n=int(input())
a=n-1
for i in range(n):
    for j in range(a):
        print(end=' ')
    for j in range(n):
        print('*',end='')
    a-=1
    print()
