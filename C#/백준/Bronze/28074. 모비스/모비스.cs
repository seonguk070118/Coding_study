string input = Console.ReadLine();
string target = "MOBIS";

foreach (char c in target)
{
    if (!input.Contains(c))
    {
        Console.WriteLine("NO");
        return;
    }
}

Console.WriteLine("YES");