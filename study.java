package mypack;

import java.util.Arrays;

class A{
	void print(){ System.out.printf("�Է°��� �����ϴ�.\n"); }
	void print(int x){ System.out.printf("���� �Է°�: %d\n",x); }
	void print(double x){ System.out.printf("�Ǽ� �Է°� %.1f\n",x); }
	void print(String x){ System.out.printf("���ڿ� �Է°� : %s\n", x); }

}

public class study {
	public static void main(String[] ar) {
		A a=new A();
		a.print();
		a.print(3);
		a.print(5.8);
		a.print("�ȳ�");
	}
}