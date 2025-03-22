String a;
int c = 0;
a=Console.ReadLine();
for(int i=0; i < a.Length; i++)
{
    if (a[i] == 'a')
    {
        c++;
    }   
    else if (a[i] == 'e')
    {
        c++;
    }
    else if(a[i] == 'i')
    {
        c++;
    }
    else if (a[i] == 'o')
    {
        c++;
    }
    else if (a[i] == 'u')
    {
        c++;
    }
}
Console.WriteLine(c);