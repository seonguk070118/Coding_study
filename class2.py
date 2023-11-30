# 스텍 ADT 수행
class stack:
    def __init__(self,capacity=5):
        self.top=-1
        self.list=[None]*capacity
        self.capacity=capacity
    def isEmpty(self):
        return self.top==-1
    def isFull(self):
        if self.top==self.capacity-1:
            return 1
        else:
            return 0
    def push(self,item):
        if not self.isFull():
            self.top+=1
            self.list[self.top]=item
            return
        else:
            print('스텍 참')
            return
    def pop(self):
        if not self.isEmpty():
            item=self.list[self.top]
            self.top-=1
            return item
        else:
            print('스텍 비어있음')
            return
    def peek(self):
        if not self.isEmpty():
            return self.list[self.top]
        else:
            print("스텍 빔")
            return

    def Print(self): # 스텍 출력하기
        print(self.list)
    def reversePrintPop(self): # 스텍 역순 출력하기
        while(not self.isEmpty()):
            print(self.pop(),end=' ')
        print()
    def sPrint(self,f,l): # 시작과 끝 받아서 두 값 사이의 스텍값 출력
        print(self.list[f-1:l])
    def plusStack(self,s): # 스텍 크기 늘리기
        self.capacity=self.capacity+s
        newlist=[None]*self.capacity
        for i in range(self.top+1):
            newlist[i]=self.list[i]
        self.list=newlist

def Priority(a):
    if a=='(' or a==')': return 0
    elif a=='+' or a=='-': return 1
    elif a=='*' or a=='/': return 2
    else: return -1

def change(l):
    s=stack(100)
    opl=[]
    for i in l:
        if i in '(':
            s.push('(')
        elif i in ')':
            while not s.isEmpty():
                op=s.pop()
                if op=='(': break
                else: opl.append(op)
        elif i in '+-*/':
            while not s.isEmpty():
                op=s.peek()
                if (Priority(i)<=Priority(op)):
                    opl.append(op)
                    s.pop()
                else: break
            s.push(i)
        else:
            opl.append(i)
    while not s.isEmpty():
        opl.append(s.pop())
    return opl

inf=input()
inf=list(inf)
print(change(inf))


'''a=stack()
a.push(1)
a.pop()
a.push(2)
a.push(3)
a.push(4)
a.push(5)
a.Print()
#a.reversePrintPop()
a.sPrint(2,3)
a.plusStack(5)
a.Print()'''