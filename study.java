package mypack;

import java.util.Arrays;

class Rectangle {
	int width;
	int height;
	Rectangle(){
		this(3,3);
	}
	Rectangle(int w){
		this(w,5);
	}
	Rectangle(int w,int h){
		this.width=w;
		this.height=h;
	}
	void print() {
		System.out.print(width + " ");
		System.out.println(height);
	}
}

public class study {
	public static void main(String[] ar) {
		Rectangle a = new Rectangle();
		Rectangle a1 = new Rectangle(16);
		Rectangle a2 = new Rectangle(16,11);
		a.print();
		a1.print();
		a2.print();
	}
}