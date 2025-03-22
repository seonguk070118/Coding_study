String[] n;
int a,b,max = 0,sum = 0;
for(int i = 0; i < 10; i++)
{
    n = Console.ReadLine().Split(' ');
    a = int.Parse(n[0]);
    b = int.Parse(n[1]);
    sum -= a;
    sum += b;
    if (sum > max)
    {
        max = sum;
    }
}
Console.WriteLine(max);