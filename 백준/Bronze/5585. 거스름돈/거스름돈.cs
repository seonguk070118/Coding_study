int[] a = { 500, 100, 50, 10, 5, 1 };
int n,count=0;
n = int.Parse(Console.ReadLine());
n = 1000 - n;
for(int i = 0; i < 6; i++)
{
    while (n >= a[i])
    {
        n -= a[i];
        count++;
    }
}
Console.WriteLine(count);