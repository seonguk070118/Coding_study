int n = int.Parse(Console.ReadLine());
int z=0, o=0;
for(int i = 0; i < n; i++)
{
    int a = int.Parse(Console.ReadLine());
    if(a == 0)
    {
        z++;
    }
    else
    {
        o++;
    }
}
if (o > z)
{
    Console.WriteLine("Junhee is cute!");
}
else
{
    Console.WriteLine("Junhee is not cute!");
}