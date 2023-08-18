a=[]
max=0
ind=1
maxi=0
for i in range(9):
    i=int(input())
    a.append(i)
for i in a:
    if(i>max):
        max=i
        maxi=ind
    ind=ind+1
print(max)
print(maxi)
