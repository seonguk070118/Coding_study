arr=[]
for i in range(10):
    arr.append(list(map(int, input().split())))
x=2
y=2
while(arr[x-1][y-1]!=2):
    arr[x-1][y-1]=9
    if(arr[x-1][y]!=1):
        y+=1
    elif(arr[x][y-1]!=1):
        x+=1
    else:
        break
arr[x-1][y-1]=9
for i in range(10):
    for j in range(10):
        print(arr[i][j],end=' ')
    print()