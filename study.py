n=int(input())
c=input().split()
mx = -1000000
mi = 1000000
for i in c:
    if int(i)>=int(mx):
        mx=i
    if int(i)<=int(mi):
        mi=i
print(f'{mi} {mx}')