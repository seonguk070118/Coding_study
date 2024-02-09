String[] a,b;
a=Console.ReadLine().Split(' ');
b=Console.ReadLine().Split(' ');
int c=0, d=0;
for(int i = 0; i < 4; i++)
{
    c += int.Parse(a[i]);
    d += int.Parse(b[i]);
}
int max=Math.Max(c,d);
Console.WriteLine(max);