# 원형덱ADT
class CDeque:
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
        if ((self.rear+1)%self.capacity==self.front):
            return 1
        else:
            return 0
    def printqueue(self):
        if self.isEmpty(): print("공백상태")
        print(self.list)

    def addRear(self,item):
        if self.isFull(): print('포화')
        else:
            self.rear=(self.rear+1)%self.capacity
            self.list[self.rear]=item
    def addFront(self,item):
        if self.isFull(): print('포화')
        else:
            self.front=(self.front-1)%self.capacity
            self.list[self.front]=item

    def deleteFront(self):
        if self.isEmpty(): print('공백')
        else:
            t=list[self.front]
            self.front=(self.front+1)%self.capacity
        return t
    def deleteRear(self):
        if self.isEmpty(): print('공백')
        else:
            t=list[self.rear]
            self.rear=(self.rear-1)%self.capacity
        return t

    def getFront(self):
        if self.isEmpty(): print('공백')
        else:
            return self.list[self.front]
    def getRear(self):
        if self.isEmpty(): print('공백')
        else:
            return self.list[self.rear]

a=CDeque()
a.addRear(1)
a.printqueue()
a.addFront(2)
a.printqueue()
a.addRear(3)
a.printqueue()
a.addRear(4)
a.printqueue()
a.deleteFront()
a.printqueue()
a.addFront(5)
a.printqueue()
a.deleteRear()
a.printqueue()