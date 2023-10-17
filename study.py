class FishCakeMaker:
    def __init__(self,**kwargs):
        self.size=10
        self.flavor="팥"
        self.price=100

        if "size"in kwargs:
            self.size=kwargs.get("size")
        if "flavor" in kwargs:
            self.flavor=kwargs.get("flavor")
        if "price" in kwargs:
            self.price=kwargs.get("price")
    def show(self):
        print("붕어빵 크기{}".format(self.size))
        print("붕어빵 종류{}".format(self.flavor))
        print("붕어빵 가격{}".format(self.price))
        print('*'*30)

fish1=FishCakeMaker()
fish2=FishCakeMaker(size=20,price=300)
fish3=FishCakeMaker(flavor="초콜렛",size=15)

fish1.show()
fish2.show()
fish3.show()

class MarketGoods(FishCakeMaker):
    def __init__(self,margin=1000,**kwargs):
        super().__init__(**kwargs)
        self.market_price=self.price+margin
        def show(self):
            print(self.flavor,self.market_price)
fish1=MarketGoods(size=20,price=500)
fish1.show()