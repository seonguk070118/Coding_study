#1번문제
n=int(input())
def prnt(n):
    if(n<1):
        return
    print(n,end=' ')
    prnt(n-1)
    return
prnt(n)


#2번 문제
n=int(input())
l=list(map(int,input().split()))
def Sum(n):
    if(n<0):
        return 0
    s=l[n]+Sum(n-1)
    return s
print(Sum(n-1))


#3번문제
def M(n):
    if(n<0):
        return 0
    if(l[n]>M(n-1)):
        return l[n]
    else:
        return M(n-1)
n=int(input())
l=list(map(int,input().split()))
print(M(n-1))