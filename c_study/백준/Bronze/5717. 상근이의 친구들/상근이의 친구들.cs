String[] a;
while (true)
{
    a = Console.ReadLine().Split(' ');
    if (int.Parse(a[0]) == 0 && int.Parse(a[1]) == 0)
    {
        break;
    }
    Console.WriteLine(int.Parse(a[0]) + int.Parse(a[1]));
}