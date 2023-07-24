package mypack;

public class study {
	public static void main(String[] ar) {
		POS1:
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(j==3)
				{
					continue POS1;
				}
				System.out.println(i+","+j);
			}
		}
	}
}