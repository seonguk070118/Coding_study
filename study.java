package mypack;

import java.util.Arrays;

class A{
	void abc() {
		System.out.println("A 클래스 메서드 abc()");
		class D{
			
		}
	}
	class B{
		void bcd() {
			System.out.println("B클래스 메서드 bcd()");
			abc();
		}
	}
	static class C{
		
	}
}

public class study {

	public static void main(String[] ar) {
		A a = new A();
		A.B b=a.new B();
		A.C c=new A.C();
		a.abc();
		b.bcd();
	}
}


