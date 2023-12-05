package mypack;

import java.util.Arrays;

interface GPU{
	public abstract void start();
	public default void gamemode() {
		System.out.println("Gamemode On");
	}
}

class LGGPU implements GPU{
	public void start() {
		System.out.println("LG GPU start");
	}
}

public class study {

	public static void main(String[] ar) {
		GPU a = new LGGPU();
		a.start();
		a.gamemode();
	}
}


