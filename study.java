package mypack;

public class study {
	public static void main(String[] ar) {
		out:
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(i==3&&j==2)
				{
					break out;
				}
			}
		}
	}
}