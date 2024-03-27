String[] n;
n = Console.ReadLine().Split();
long[] a = new long [3];
long temp;
a[0] = long.Parse(n[0]);
a[1] = long.Parse(n[1]);
a[2] = long.Parse(n[2]);
for(int i = 0; i < 2; i++)
{
    if (a[i] > a[i + 1])
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
}
for (int i = 0; i < 2; i++)
{
    if (a[i] > a[i + 1])
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
}
Console.WriteLine(a[1]);