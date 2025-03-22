int n = int.Parse(Console.ReadLine());
String[] a = Console.ReadLine().Split();
int sum = 0;
for(int i = 0; i < a.Length; i++)
{
    if (int.Parse(a[i]) ==n) sum++;
}
Console.WriteLine(sum);