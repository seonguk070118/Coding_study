sum=0
while 1:
    a=input()
    if a=='#':
        break
    for i in a:
        if i in 'aoieuAOIEU':
            sum+=1
    print(sum)
    sum=0
