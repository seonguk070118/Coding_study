package mypack;

import java.util.Arrays;

class A{
	void print(){ System.out.printf("입력값이 없습니다.\n"); }
	void print(int x){ System.out.printf("정수 입력값: %d\n",x); }
	void print(double x){ System.out.printf("실수 입력값 %.1f\n",x); }
	void print(String x){ System.out.printf("문자열 입력값 : %s\n", x); }

}

public class study {
	public static void main(String[] ar) {
		A a=new A();
		a.print();
		a.print(3);
		a.print(5.8);
		a.print("안녕");
	}
}