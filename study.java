package mypack;

import java.util.Arrays;

class A{
	
}

class B extends A{
	
}

class C extends A{
	
}

class D extends B{
	
}
public class study {
	public static void main(String[] ar) {
		A aa = new A();
		System.out.println(aa instanceof A);
		System.out.println(aa instanceof B);
		System.out.println(aa instanceof C);
		System.out.println(aa instanceof D);
		
		A ad =new D();
		System.out.println(ad instanceof A);
		System.out.println(ad instanceof B);
		System.out.println(ad instanceof C);
		System.out.println(ad instanceof D);
	}
}