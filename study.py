a=input()
for i in range(10):
    if i==0:
        continue
    print(a+' * '+str(i)+' =',end=' ')
    b=int(a)*int(i)
    print(b)