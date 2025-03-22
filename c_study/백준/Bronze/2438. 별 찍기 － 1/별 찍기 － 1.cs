int a;
a=int.Parse(Console.ReadLine());
for(int i=1;i<=a;i++){
    for(int j=0;j<i;j++){
        Console.Write("*");
    }
    Console.WriteLine();
}