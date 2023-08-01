a=int(input())
for i in range(a+1):
    if i==0:
        continue
    for i in range(i):
        print('*',end='')
    print()