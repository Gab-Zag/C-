#include "iostream"
#include "cmath"
using namespace std;
int fat1(int n1)
{
    //fatora��o
    int i1;
    int fat = 1;
    for(i1 = 1; i1 <= n1; i1++)//estrutura de repeti��o
    {
        fat = fat * i1;//primeira parte da conta da fatora��o
    }
    return fat;
}

double soma(int n, double x)
{
    double resultado1 = 1;
    double numero = 2;
    int i;
    if(n == 1)
    {
        resultado1 = 1;
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                resultado1 = resultado1 + (pow(x,numero)/ fat1(numero));
            }
            else
            {
                resultado1 = resultado1 - (pow(x,numero)/ fat1(numero));
            }
            numero += 2;
        }

    }


    return resultado1;
}

int main()
{
    //variaveis
    int n;
    double x;
    //entrada do primeiro dado
    cout << "No. Termos (>=1 e <=20): ";
    cin >> n;
    //verificação
    while (n < 1 || n > 20)
    {
        cout << "No. Termos (>=1 e <=20): ";
        cin >> n;
    }
    //entrada do segundo dado
    cout << "Valor de x: ";
    cin >> x;
    cout << soma(n,x);
    return 0;
}
