using System;

public class cachorro
{
    public string Nome;
    public int Idade;

    public cachorro(String nome, int idade)
    {
        this.Nome = nome;
        this.Idade = idade;
    }

    public virtual void showInfo()
    {
        Console.WriteLine($"O nome do cachorro é {Nome} e a idade dele é {Idade}");
    }
}


public class cachorro_grande : cachorro
{
    private string Nome;
    private int Idade;
    private int Tamanho;

    public cachorro_grande(String nome, int idade, int tamanho) : base(nome, idade, tamanho)
    {
        this.Nome = nome;
        this.Idade = idade;
        this.Tamanho = tamanho;
    }

    public override void showInfo()
    {
        Console.WriteLine($"O nome do cachorro é {Nome}, a idade dele é {Idade} e o tamanho é {Tamanho}");
    }
}

public class cachorro_pequeno : cachorro
{
    private string Nome;
    private int Idade;
    private int Tamanho;

    public cachorro_pequeno(String nome, int idade, int tamanho) : base(nome, idade, tamanho)
    {
        this.Nome = nome;
        this.Idade = idade;
        this.Tamanho = tamanho;
    }

    public override void showInfo()
    {
        Console.WriteLine($"O nome do cachorro é {Nome}, a idade dele é {Idade} e o tamanho é {Tamanho}");
    }
}

class Program
{
    public static void Main()
    {
        cachorro dog = new cachorro_pequeno("dog", 1, 10);
        cachorro dog2 = new cachorro_grande("dog2", 2, 20);
    }
}
