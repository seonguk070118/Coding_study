a=[-1 for i in range(26)]
b=input()
s=0
for i in b:
    c=ord(i)
    c-=97
    if a[c]==-1:
        a[c]=s
        s+=1
    else:
        s+=1
for i in a:
    print(i,end=' ')