String a = Console.ReadLine();
string[] b = a.Split(' ');
int sum = 0;
sum = int.Parse(b[0]) * int.Parse(b[1]);
if (sum < int.Parse(b[2]))
{
    Console.WriteLine("0");
}
else
{
    Console.WriteLine("{0}", sum - int.Parse(b[2]));
}