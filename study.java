package mypack;

import java.util.Arrays;

class A{
	int a,b,c,d;
	A(){
		this(3);
		System.out.println("A������ 1");
	}
	A(int a){
		System.out.println("A������ 2");
	}
}

class B extends A{
	B(){
		this(3);
		System.out.println("B������ 1");
	}
	B(int a){
		System.out.println("B������ 2");
	}
}

public class study {
	public static void main(String[] ar) {
		A aa1 = new A();
		System.out.println();
		A aa2 = new A(3);
		System.out.println();
		
		B bb1 = new B();
		System.out.println();
		B bb2 = new B(3);
	}
}