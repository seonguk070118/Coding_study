package mypack;

import java.util.Arrays;

class A{
	void averageScore(int...scores) {
		int sum=0;
		for(int k:scores) {
			sum+=k;
		}
		double avg=(double)sum/scores.length;
		System.out.println(avg);
	}
}

public class study {
	public static void main(String[] ar) {
		A a=new A();
		a.averageScore(1);
		a.averageScore(1,2);
		a.averageScore(1,2,3);
		a.averageScore(1,2,3,4);
	}
}