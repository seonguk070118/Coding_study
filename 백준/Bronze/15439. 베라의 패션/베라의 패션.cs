int n = int.Parse(Console.ReadLine());
int c=0;
for(int i = 1; i <= n; i++)
{
    for (int j=1;j<=n;j++)
    {
        c++;
    }
    c--;
}
Console.WriteLine(c);