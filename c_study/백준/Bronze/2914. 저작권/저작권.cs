String a=Console.ReadLine();
String[] b = a.Split();
for(int i = int.Parse(b[0]) * int.Parse(b[1]); i > 0; i--)
{
    if (i > int.Parse(b[0]) * (int.Parse(b[1]) - 1))
    {
        continue;
    }
    else
    {
        Console.WriteLine(i + 1);
        break;
    }
}