int a, b, c,sum=0;
a = int.Parse(Console.ReadLine());
b = int.Parse(Console.ReadLine());
c = int.Parse(Console.ReadLine());
sum = a + b + c;
if(a==60 && b==60 && c == 60)
{
    Console.WriteLine("Equilateral");
}
else if (sum == 180)
{
    if (a == b || b == c || a == c)
    {
        Console.WriteLine("Isosceles");
    }
    else
    {
        Console.WriteLine("Scalene");
    }
}
else
{
    Console.WriteLine("Error");
}