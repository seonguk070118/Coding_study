n=input()
s=n[::-1]
su=int(n)+int(s)
s=str(su)
s=s[::-1]
if str(su)==s:
    print('YES')
else:
    print("NO")