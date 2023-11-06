# 스텍 ADT 지우지 말고 저장해놓기
stack_size=5
list=[None]*stack_size
top=-1
def isEmpty():
    if top==-1:
        return 1
    else:
        return 0

def isFull():
    if top==stack_size-1:
        return 1
    else:
        return 0

def push(i):
    global top
    if not isFull():
        top+=1
        list[top]=i
        print(list)
        return
    else:
        print('스텍가득참')
        return
    
def pop():
    global top
    if not isEmpty():
        item=list[top]
        top-=1
        print(item)
        return
    else:
        print('스텍 비어있음')
        return

def peek():
    if not isEmpty():
        print(list[top])
        return
    else:
        print("스텍 빔")
        return

push(1)
pop()
push(2)
push(3)
peek()

# 원형큐 ADT
class CircularQueue:
    def __init__(self,capacity=5):
        self.capacity=capacity
        self.list=[None]*capacity
        self.front=0
        self.rear=0
    def isEmpty(self):
        if self.front==self.rear:
            return 1
        else:
            return 0
    def isFull(self):
        if (self.rear+1)%self.capacity==self.front:
            return 1
        else:
            return 0
    def enqueue(self,item):
        if self.isFull(): print("포화상태")
        else:
            self.rear=(self.rear+1)%self.capacity
            self.list[self.rear]=item
    def dequeue(self):
        if self.isEmpty(): print("공백상태")
        else:
            self.front=(self.front+1)%self.capacity
    def printqueue(self):
        if self.isEmpty(): print("공백상태")
        i=self.front
        while i != self.rear:
            i=(i+1)%self.capacity
            print(self.list[i],end=' ')
            if i==self.rear: break
        print()

a = CircularQueue()
a.enqueue(30)
a.enqueue(50)
a.enqueue(40)
a.printqueue()
a.dequeue()
a.dequeue()
a.printqueue()