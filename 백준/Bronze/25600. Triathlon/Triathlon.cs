int n = int.Parse(Console.ReadLine());
String[] a;
int sum = 0,max=0;
for(int i = 0; i < n; i++)
{
    a = Console.ReadLine().Split();
    sum = int.Parse(a[0]) * (int.Parse(a[1]) + int.Parse(a[2]));
    if(int.Parse(a[0]) == (int.Parse(a[1]) + int.Parse(a[2]))){
        sum *= 2;
    }
    if(sum > max)
    {
        max = sum;
    }
}
Console.WriteLine(max);