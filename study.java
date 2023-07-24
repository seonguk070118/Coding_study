package mypack;

public class study {
	public static void main(String[] ar) {
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(i==3&&j==2)
				{
					i=100;
					break;
				}
			}
		}
	}
}