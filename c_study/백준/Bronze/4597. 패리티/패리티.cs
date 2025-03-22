using System.Globalization;

String n;
for(; ; )
{
    n = Console.ReadLine();
    int a = n.Length-1,count=0;
    if (n[0]== '#')
    {
        break;
    }
    for (int j = 0; j < a; j++)
    {
        if (n[j] == '1')
        {
            count++;
        }
    }
    if (n[a] == 'e' && count%2==0)
    {
        n = n.Replace('e', '0');
    }
    else if (n[a] == 'e' && count % 2 == 1)
    {
        n = n.Replace('e', '1');
    }
    else if (n[a] == 'o' && count % 2 == 0)
    {
        n = n.Replace('o', '1');
    }
    else if (n[a] == 'o' && count % 2 == 1)
    {
        n = n.Replace('o', '0');
    }
    Console.WriteLine(n);
}