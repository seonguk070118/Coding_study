def f(n):
    if n==0:
        return
    f(n//2)
    if n%2==0:
        print('0',end='')
    elif n%2==1:
        print('1',end='')
n=int(input())
if n==0:
        print('0')
f(n)