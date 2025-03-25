using System;
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string[] ss = s.Split(',');
        int sum = 0;
        for (int i = 0; i < ss.Length; i++)
        {
            sum += int.Parse(ss[i]);
        }
        Console.WriteLine(sum);
    }
}
