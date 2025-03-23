int n0 = 0, n1 = 1, n2 = 0, a;
a = int.Parse(Console.ReadLine());
if (a == 1) { Console.WriteLine(n1); return; }
for (int i = 0; i < a-1; i++)
{
    n2 = n0 + n1;
    n0 = n1;
    n1 = n2;
}
Console.WriteLine(n2);