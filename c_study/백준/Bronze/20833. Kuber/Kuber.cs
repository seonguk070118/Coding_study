int a,sum=0;
a=int.Parse(Console.ReadLine());
for(int i = 1; i <= a; i++)
{
    sum += i * i * i;
}
Console.WriteLine(sum);