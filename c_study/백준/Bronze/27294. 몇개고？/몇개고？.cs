String[] n;
int a, b;
n = Console.ReadLine().Split(' ');
a = int.Parse(n[0]);
b = int.Parse(n[1]);
if ((a >= 12 && a <= 16) && (b == 0))
{
    Console.WriteLine("320");
}
else { Console.WriteLine(280); }