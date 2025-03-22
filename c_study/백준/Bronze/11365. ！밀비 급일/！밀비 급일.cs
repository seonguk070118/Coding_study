String a;
while (true)
{
    a=Console.ReadLine();
    if(a == "END")
    {
        break;
    }
    for(int i = a.Length-1; i >=0; i--)
    {
        Console.Write(a[i]);
    }
    Console.WriteLine();
}