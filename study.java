package mypack;

import java.util.Arrays;
public class study {
	public static void main(String[] ar) {
		int a[] = new int[] {4,100,20,1,50,7};
		for(int i: a) {
			System.out.println(i);
			if(i<a.length) {
				System.out.println("원소가 작습니다");
			}
			else {
				System.out.println("원소가 큽니다");
			}
		}
		
	}
}