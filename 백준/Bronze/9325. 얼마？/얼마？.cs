int a,b,f,s,sum=0,n1;
String[] n;
f=int.Parse(Console.ReadLine());
for(int i = 0; i < f; i++)
{
    s=int.Parse((Console.ReadLine()));
    sum += s;
    n1 = int.Parse((Console.ReadLine()));
    for (int j = 0; j < n1; j++)
    {
        n = Console.ReadLine().Split();
        a = int.Parse(n[0]);
        b = int.Parse(n[1]);
        sum += a * b;
    }
    Console.WriteLine(sum);
    sum = 0;
}