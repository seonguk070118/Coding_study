import random
count=0
rn=random.randint(1,100)
while 1:
    try :
        a=int(input())
        count+=1
        if a==rn:
            print(count)
            break
        else :
            if a>rn:
                print('down')
            else :
                print('up')
    except :
        print('숫자를 입력하세요')