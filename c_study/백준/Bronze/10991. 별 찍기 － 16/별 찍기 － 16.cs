int n = int.Parse(Console.ReadLine()),t=1;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n - i-1; j++)
    {
        Console.Write(" ");
    }
    for(int j = 0; j < (i + 1) * 2 - 1; j++)
    {
        if (t == 1)
        {
            Console.Write("*");
        }
        else
        {
            Console.Write(" ");
        }
        t *= -1;
    }
    t = 1;
    Console.WriteLine();
}