a=int(input())
for i in range(a+1):
    if i==0:
        continue
    for k in range(a-i):
        print(' ',end='')
    for j in range(i):
        print('*',end='')
    print()