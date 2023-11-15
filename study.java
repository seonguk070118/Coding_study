package mypack;

import java.util.Arrays;

class telephone{
	void call(){
		System.out.println("전화걸기");
	}
	
	
}

class smartphone extends telephone {
	@Override
	void call() {
		System.out.println("전화걸기\n녹음가능");
	}
	void camera() {
		System.out.println("찰칵");
	}
}

class internetphone extends telephone {
	void internet() {
		System.out.println("인터넷 연결");
	}
}

class phone extends telephone {
	void SMS() {
		System.out.println("문자 발송합니다");
	}
}

public class study {

	public static void main(String[] ar) {
		telephone[] a = new telephone[] { 
				new smartphone(), 
				new internetphone(), 
				new phone()
		};
		for(telephone t: a) {
			t.call();
		}
	}
}


