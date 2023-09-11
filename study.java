package mypack;

import java.util.Arrays;

class A{
	int m=3;
	void print() {
		System.out.println("객체 생성 및 활용");
	}
}

public class study {
	public static void main(String[] ar) {
		A a = new A();
		a.m = 5;
		System.out.println(a.m);
		a.print();
	}
}