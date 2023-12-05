	package mypack;
	
	import java.io.IOException;
	import java.io.InputStreamReader;
	import java.util.Arrays;
	class DataBox{
		boolean isEmpty=true;
		int data;
		synchronized void inputData(int data) {
			if(!isEmpty) {
				try {wait();}catch(InterruptedException e) {}
			}
			this.data=data;
			isEmpty=false;
			System.out.println("�Է� ������: "+data);
			notify();
		}
		synchronized void outputData() {
			if(isEmpty) {
				try {wait();}catch(InterruptedException e) {}
			}
			isEmpty=true;
			System.out.println("��� ������: "+data);
			notify();
		}
	}
	public class study {
		public static void main(String[] ar) {
			DataBox dataBox = new DataBox();
			Thread t1=new Thread() {
				public void run() {
					for(int i =1;i<10;i++) {
						dataBox.inputData(i);
					}
				};
			};
			Thread t2=new Thread() {
				public void run() {
					for(int i =1;i<10;i++) {
						dataBox.outputData();
					}
				};
			};
			t1.start();
			t2.start();
		}
	}
	
	
