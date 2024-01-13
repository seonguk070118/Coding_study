while 1:
    n=input()
    if n=='# 0 0':
        break
    ns=n.split()
    print(ns[0],end=' ')
    if int(ns[1])>17:
        print('Senior')
    elif int(ns[2])>79:
        print('Senior')
    else:
        print('Junior')