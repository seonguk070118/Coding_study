'''a,b=map(int,input().split())
while(b!=0):
    a,b=b,a%b
print(a)'''

a,b=map(int,input().split())
def f(a,b):
    if(b==0):
        return a
    return f(b,a%b)
print(f(a,b))