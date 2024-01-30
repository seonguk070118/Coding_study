int a,sum=0;
for(int i = 0; i < 4; i++)
{
    a=int.Parse(Console.ReadLine());
    sum+=a;
}
Console.WriteLine(sum/60);
Console.Write(sum%60);