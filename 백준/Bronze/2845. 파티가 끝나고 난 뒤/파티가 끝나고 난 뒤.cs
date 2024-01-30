String a = Console.ReadLine();
string[] b = a.Split(' ');
int sum = 0;
sum = int.Parse(b[0]) * int.Parse(b[1]);
a=Console.ReadLine();
b = a.Split(' ');
for(int i=0;i<5; i++)
{
    Console.Write(int.Parse(b[i]) - sum);
    Console.Write(" ");
}