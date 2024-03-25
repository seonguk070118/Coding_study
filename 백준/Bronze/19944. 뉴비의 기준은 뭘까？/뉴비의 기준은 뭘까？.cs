String[] n;
n = Console.ReadLine().Split();
int a, b;
a = int.Parse(n[0]);
b = int.Parse(n[1]);
if(b==1 || b == 2)
{
    Console.WriteLine("NEWBIE!");
}
else if (b <= a)
{
    Console.WriteLine("OLDBIE!");
}
else
{
    Console.WriteLine("TLE!");
}