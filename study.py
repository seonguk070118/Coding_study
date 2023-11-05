def aa(n):
    if n<=1:
        return 1
    else:
        return n*aa(n-1)

c,b=map(int,input().split())
print(aa(c)//(aa(b)*aa(c-b)))