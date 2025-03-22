int n,count=0,count2=0;
n=int.Parse(Console.ReadLine());
String a;
for(int i=0; i<n; i++)
{
    a=Console.ReadLine();
    a = a.ToUpper();
    for(int j=0; j<a.Length; j++)
    {
        if (a[j]=='A' || a[j] == 'E' || a[j] == 'I' || a[j] == 'O' || a[j] == 'U')
        {
            count++;
        }
        else if (a[j]==' ')
        {
            continue;
        }
        else
        {
            count2++;
        }
    }
    Console.WriteLine("{0} {1}",count2,count);
    count = 0;
    count2=0;
}