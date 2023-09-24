#include <iostream>
#include <cmath>
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

double soma(double x1, int n1)
{
    float resultado;
    float resultado1 = 0;
    float resultado2;
    float resultado3 = 0;
    int teste;
    int i;
    int numero = 2;
    for(i = 0; i <= n1; i++)
    {
        resultado2 = (pow(x1, numero)) / (fat1(numero));
        resultado1 = resultado1 + resultado2;
        teste = resultado1;
        if((teste % 2) == 0)
        {
            resultado3 = resultado1 + resultado3;
        }
        else
        {
            resultado3 = resultado1 - resultado3;
        }
        resultado = 1 - resultado3;
    }
    resultado;
    return resultado;
}

int main()
{
    //variaveis
    int n;
    double x;
    double resultadofinal;
    //entrada de dados
    cout << "NO. termos (>= 1 e <= 20): ";
    cin >> n;
    while(n < 1)
    {
        cout << "NO. invalido por favor entre com um numero correto: ";
        cin >> n;
    }
    while(n > 20)
    {
        cout << "No. invalido por favor entre com um numero correto: ";
        cin >> n;
    }
    cout << "Valor de X: ";
    cin >> x;
    cout << soma(x,n);
    return 0;
}
