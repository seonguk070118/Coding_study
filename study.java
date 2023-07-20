package mypack;

public class study {
	public static void main(String[] ar) {
		// 유형 1: if
		int value1=5;
		if(value1>3) {
			System.out.println("1");
		}
		if(value1<5) {
			System.out.println("2");
		}
		
		boolean bool1=true;
		boolean bool2=false;
		if(bool1) {
			System.out.println("3");
		}
		if(bool2) {
			System.out.println("4");
		}
		
		//유형 2: if-else
		int value2=5;
		if(value2>3) {
			System.out.println("5");
		}
		else {
			System.out.println("6");
		}
		
		//cf. 삼항 연산자와 변환가능
		System.out.println((value2>3)?"5":"6");
		System.out.println();
		
		//유형 3: if-else if-else if-...-else
		int value3=85;
		if(value3>=90) {
			System.out.println("A");
		}
		else if(value3>=80) {
			System.out.println("B");
		}
		else if(value3>70) {
			System.out.println("C");
		}
		else {
			System.out.println("F");
		}
		
		
		if(value3>70) {
			System.out.println("C");
		}
		else if(value3>=80) {
			System.out.println("B");
		}
		else if(value3>=90) {
			System.out.println("A");
		}
		else {
			System.out.println("F");
		}
		
		
		if(value3>=70&&value3<80) {
			System.out.println("C");
		}
		else if(value3>=80&&value3<90) {
			System.out.println("B");
		}
		else if(value3>=90) {
			System.out.println("A");
		}
		else {
			System.out.println("F");
		}
	}
}