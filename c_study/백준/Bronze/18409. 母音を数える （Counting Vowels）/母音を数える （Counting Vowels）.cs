int n,sum=0;
String a;
n = int.Parse(Console.ReadLine());
a = Console.ReadLine();
for(int i = 0; i < n; i++)
{
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u')
    {
        sum++;
    }
}
Console.WriteLine(sum);