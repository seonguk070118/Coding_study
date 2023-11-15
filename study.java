package mypack;

import java.util.Arrays;

class bank{
	static int money=5;
	void addMoney(){
		money++;
	}
}

public class study {
	public static void main(String[] ar) {
		bank a = new bank();
		System.out.println(a.money);
		a.addMoney();
		a.addMoney();
		a.addMoney();
		System.out.println(a.money);
	}
}