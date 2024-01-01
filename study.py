a,b=map(list,input().split())
a.reverse()
b.reverse()
for i in range(3):
    if a[i]==b[i]:
        continue
    elif a[i]>b[i]:
        for i in range(3):
            print(a[i],end='')
        break
    else:
        for i in range(3):
            print(b[i],end='')
        break