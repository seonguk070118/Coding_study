l=[]
for i in range(10):
    a=int(input())
    l.append(a)
for i in range(10):
    l[i]=l[i]%42
b=[]
for i in l:
    if i not in b:
        b.append(i)

print(len(b))