package mypack;

import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class study {

	public static void main(String[] ar) {
		InputStreamReader is = null;
		try {
			is = new InputStreamReader(System.in);
			System.out.println("�Է±��� = "+is.read());
		}catch(IOException e) {
			e.printStackTrace();
		}
	}
}


