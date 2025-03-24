using System;
class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string[] arr = Console.ReadLine().Split();
        string[] tp = Console.ReadLine().Split();
        int t = int.Parse(tp[0]);
        int r1 = 0,r2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int b = int.Parse(arr[i]);
            while (true)
            {
                if (b == 0) break;
                if (t >= b)
                {
                    r1++;
                    break;
                }
                else
                {
                    r1++;
                    b -= t;
                }
            }
        }
        int p = int.Parse(tp[1]);
        while(a != 0)
        {
            if (p <= a) { r2++; a -= p; }
            else { break; }
        }
        Console.WriteLine(r1);
        Console.Write(r2 + " " + a);
    }
}
