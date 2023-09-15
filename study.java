package mypack;

import java.util.Arrays;

class A{
	int a,b,c,d;
	A(){
		this(5);
	}
	A(int k){
		a=k;
		b=k;
		c=k;
		d=k;
	}
}

public class study {
	public static void main(String[] ar) {
		A a=new A();
		System.out.println(a.a);
		System.out.println(a.b);
		System.out.println(a.c);
		System.out.println(a.d);
	}
}