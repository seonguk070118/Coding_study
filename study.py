class bssm:
    def __init__(self,name,age,dow):
        self.name = name
        self.age = age
        self.dow = dow
    def intro(self):
        print(f"안녕하세요, 부소마에서 {self.dow}를 담당하고 있는 {self.age}살 {self.name}입니다.")

a=bssm('최성욱',17,'1116')
a.intro()