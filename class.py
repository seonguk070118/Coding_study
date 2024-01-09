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

# 선형큐 ADT
class Queue:
    def __init__(self, capacity=5):
        self.capacity = capacity
        self.list = [None] * capacity
        self.front = -1
        self.rear = -1
    def isEmpty(self):
        if self.front == -1 and self.rear == -1:
            return 1
        else:
            return 0
    def isFull(self):
        if self.rear == self.capacity - 1:
            return 1
        else:
            return 0
    def enqueue(self, item):
        if self.isFull():
            print("포화상태")
        else:
            if self.isEmpty():
                self.front = 0
            self.rear += 1
            self.list[self.rear] = item
    def dequeue(self):
        if self.isEmpty():
            print("공백상태")
        else:
            item = self.list[self.front]
            if self.front == self.rear:
                self.front = -1
                self.rear = -1
            else:
                self.front += 1
            return item
    def peek(self):
        return self.list[self.front]
    def printqueue(self):
        if self.isEmpty():
            print("공백상태")
        else:
            for i in range(self.front, self.rear + 1):
                print(self.list[i], end=" ")
            print()
    def isizeQ(self):
        return (self.rear+1)-self.front
    def search(self,item):
        for i in range(self.front, self.rear + 1):
            if self.list[i]==item:
                return i+1
a = Queue()
a.enqueue(30)
a.enqueue(50)
a.enqueue(40)
a.printqueue()
a.isizeQ()
a.dequeue()
a.dequeue()
a.printqueue()


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
            ite=self.list[self.front]
            self.front=(self.front+1)%self.capacity
            return ite
    def peek(self):
        return self.list[self.front]
    def printqueue(self):
        if self.isEmpty(): print("공백상태")
        i=self.front
        while i != self.rear:
            i=(i+1)%self.capacity
            print(self.list[i],end=' ')
            if i==self.rear: break
        print()
    def isizeQ(self):
        if self.rear >= self.front:
            return self.rear - self.front + 1
        else:
            return (self.capacity - self.front + self.rear + 1) % self.capacity
    def search(self, item):
        i = self.front
        while i != self.rear:
            i = (i + 1) % self.capacity
            if self.list[i] == item:
                return i

a = CircularQueue()
a.enqueue(30)
a.enqueue(50)
a.enqueue(40)
a.printqueue()
a.dequeue()
a.dequeue()
a.printqueue()
# 선형 덱(Deque) ADT
class Deque:
    def __init__(self, capacity=5):
        self.capacity = capacity  # 덱의 용량 설정
        self.list = [None] * capacity  # 용량에 해당하는 크기의 리스트 생성 및 초기화
        self.front = -1  # 덱의 전단(front)을 -1로 초기화
        self.rear = capacity  # 덱의 후단(rear)을 용량으로 초기화

    def isEmpty(self):
        if self.front == self.rear:
            return 1  # 전단과 후단이 같으면 덱이 비어있는 상태
        else:
            return 0

    def isFull(self): # 덱의 포화여부 반환
        for i in range(capacity):  
            if i == 0:
                return 0  
        return 1  # 순회가 끝난 후에도 0이라면 덱은 가득 찬 상태

    def printqueue(self):
        if self.isEmpty():
            print("공백상태")  # 덱이 비어있는 경우 "공백상태" 출력
        print(self.list)  # 덱의 모든 항목 출력

    def addFront(self, item):
        if self.isFull():
            print('포화')  # 덱이 가득 찬 경우 "포화" 출력
        else:
            self.front = self.front + 1  # 전단을 1 증가시키고
            self.list[self.front] = item  # 전단 위치에 항목 추가

    def addRear(self, item):
        if self.isFull():
            print('포화')  # 덱이 가득 찬 경우 "포화" 출력
        else:
            self.rear = self.rear - 1  # 후단을 1 감소시키고
            self.list[self.rear] = item  # 후단 위치에 항목 추가

    def deleteFront(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            t = self.list[self.front]  
            self.front = self.front - 1  # 전단을 1 감소시킴
        return t  # 제거한 항목 반환

    def deleteRear(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            t = self.list[self.rear]  
            self.rear = self.rear + 1  # 후단을 1 증가시킴
        return t  # 제거한 항목 반환

    def getFront(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            return self.list[self.front]  # 전단 위치의 항목 반환

    def getRear(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            return self.list[self.rear]  # 후단 위치의 항목 반환


# 원형 덱(Circular Deque) ADT
class CDeque:
    def __init__(self, capacity=5):
        self.capacity = capacity  # 원형 덱의 용량 설정
        self.list = [None] * capacity  # 용량에 해당하는 크기의 리스트 생성 및 초기화
        self.front = 0  # 원형 덱의 전단(front)을 0으로 초기화
        self.rear = 0  # 원형 덱의 후단(rear)을 0으로 초기화

    def isEmpty(self):
        if self.front == self.rear:
            return 1  # 전단과 후단이 같으면 덱이 비어있는 상태
        else:
            return 0

    def isFull(self):
        if (self.rear + 1) % self.capacity == self.front:
            return 1  # 후단의 다음 위치가 전단과 같으면 덱이 가득 찬 상태
        else:
            return 0

    def printqueue(self):
        if self.isEmpty():
            print("공백상태")  # 덱이 비어있는 경우 "공백상태" 출력
        print(self.list)  # 덱의 모든 항목 출력

    def addRear(self, item):
        if self.isFull():
            print('포화')  # 덱이 가득 찬 경우 "포화" 출력
        else:
            self.rear = (self.rear + 1) % self.capacity  # 후단을 다음 위치로 이동
            self.list[self.rear] = item  # 후단 위치에 항목 추가

    def addFront(self, item):
        if self.isFull():
            print('포화')  # 덱이 가득 찬 경우 "포화" 출력
        else:
            self.front = (self.front - 1) % self.capacity  # 전단을 이전 위치로 이동
            self.list[self.front] = item  # 전단 위치에 항목 추가

    def deleteFront(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            t = list[self.front]  # 수정이 필요합니다. list -> self.list로 수정해야 합니다.
            self.front = (self.front + 1) % self.capacity  # 전단을 다음 위치로 이동
        return t  # 제거한 항목 반환

    def deleteRear(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            t = list[self.rear]  # 수정이 필요합니다. list -> self.list로 수정해야 합니다.
            self.rear = (self.rear - 1) % self.capacity  # 후단을 이전 위치로 이동
        return t  # 제거한 항목 반환

    def getFront(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            return self.list[self.front]  # 전단 위치의 항목 반환

    def getRear(self):
        if self.isEmpty():
            print('공백')  # 덱이 비어있는 경우 "공백" 출력
        else:
            return self.list[self.rear]  # 후단 위치의 항목 반환