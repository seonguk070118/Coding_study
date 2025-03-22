int d , sum = 0;
d = int.Parse(Console.ReadLine());
String a = Console.ReadLine();
string[] b = a.Split(' ');
for (int i = 0; i < 5; i++)
{
    if (int.Parse(b[i]) == d)
    {
        sum++;
    }
}
Console.WriteLine(sum);