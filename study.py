a=int(input())
b=int(input())
c=int(input())
d=int(input())
e=int(input())
arr=[a,b,c]
arr2=[d,e]
arr3=[0,0,0,0,0,0]
k=0
for i in arr:
    for j in arr2:
        arr3[k]=i+j+((i+j)/10)
        k+=1
print(min(arr3))