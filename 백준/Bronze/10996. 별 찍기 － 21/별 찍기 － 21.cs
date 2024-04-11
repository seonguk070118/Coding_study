int n, a = 1, b;
n = int.Parse(Console.ReadLine());
b = n * 2;
for(int i = 0; i < b; i++)
{
    for(int j = 0; j < n; j++)
    {
        if(a == 1)
        {
            Console.Write("*");
        }
        else
        {
            Console.Write(" ");
        }
        a *= -1;
    }
    if (n % 2 == 0)
    {
        a *= -1;
    }
    Console.WriteLine();
}