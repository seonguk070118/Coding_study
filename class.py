n=int(input())
list_test=list(map(int,input().split()))

def Sum(n):
    if(n<0):
        return 0
    s=list_test[n]+Sum(n-1)
    return s

print(Sum(n-1))