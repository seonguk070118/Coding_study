package mypack;

import java.util.Arrays;

class telephone{
	void call(){
		System.out.println("��ȭ�ɱ�");
	}
	
	
}

class smartphone extends telephone {
	@Override
	void call() {
		System.out.println("��ȭ�ɱ�\n��������");
	}
	void camera() {
		System.out.println("��Ĭ");
	}
}

class internetphone extends telephone {
	void internet() {
		System.out.println("���ͳ� ����");
	}
}

class phone extends telephone {
	void SMS() {
		System.out.println("���� �߼��մϴ�");
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


