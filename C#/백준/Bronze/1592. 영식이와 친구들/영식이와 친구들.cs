using System;
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string[] ss = s.Split();
        int n = int.Parse(ss[0]);
        int m = int.Parse(ss[1]);
        int l = int.Parse(ss[2]);
        int[] p = new int[n+1];
        int r = 1;
        p[1]++;
        int count = 0;
        while(true)
        {
            if (p[r] == m)
            {
                break;
            }
            if (p[r] % 2 == 0)
            {
                r -= l;
                if (r < 1)
                {
                    r += n;
                }
                p[r]++;
                count++;

            }
            else if (p[r] % 2 == 1)
            {
                r += l;
                if (r > n)
                {
                    r -= n;
                }
                p[r]++;
                count++;
            }
        }
        Console.WriteLine(count);
    }
}
