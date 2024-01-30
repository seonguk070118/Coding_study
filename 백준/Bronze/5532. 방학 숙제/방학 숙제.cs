int a,b,c,d,sum=0;
sum=int.Parse(Console.ReadLine());
a=int.Parse(Console.ReadLine());
b=int.Parse(Console.ReadLine());
c=int.Parse(Console.ReadLine());
d=int.Parse(Console.ReadLine());
for(int i=0; ;i++)
{
    if (a <= 0 && b <= 0)
    {
        break;
    }
    a -= c;
    b -= d;
    sum--;
}
Console.WriteLine(sum);