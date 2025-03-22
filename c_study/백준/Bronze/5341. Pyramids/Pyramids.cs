int a, sum = 0;
while (true)
{
    a = int.Parse(Console.ReadLine());
    if(a == 0)
    {
        break;
    }
    else
    {
        for(int i = 1; i <= a; i++)
        {
            sum += i;
        }
    }
    Console.WriteLine(sum);
    sum = 0;
}