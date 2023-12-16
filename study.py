h,m=map(int,input().split())
t=int(input())
for i in range(t):
    m+=1
    if m==60:
        m=0
        h+=1
    if h==24:
        h=0
print(f'{h} {m}')