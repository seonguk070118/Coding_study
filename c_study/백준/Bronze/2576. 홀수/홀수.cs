int[] a = new int[7];
int nin = 101,sum=0;
for(int i = 0;i< 7; i++)
{
    a[i]=int.Parse(Console.ReadLine());
}
for (int i = 0; i < 7; i++)
{
    if (a[i] < nin && a[i]%2==1)
    {
        nin = a[i];
    }
    if (a[i] % 2 == 1)
    {
        sum += a[i];
    }
}
if(sum==0)
{
    Console.WriteLine("-1");
    return;
}
Console.WriteLine("{0}\n{1}",sum,nin);