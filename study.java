package mypack;

public class study {
	public static void main(String[] ar) {
		int score=72;
		switch(score/10){
			case 10:
			case 9: System.out.println("A"); break;
			case 8: System.out.println("B"); break;
			case 7: System.out.println("C"); break;
			default: System.out.println("F");
		}
	}
}