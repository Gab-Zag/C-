#include "iostream"
using namespace std;
double maior(int nelementos1, double elementos1[])
{
    int i;
    double maior1 = -999;
    for(i = 0; i <= nelementos1; i++)
    {
        if(elementos1[i] >= maior1)
        {
            maior1 = elementos1[i];
        }
    }
    return maior1;
}

int main()
{
    //variaveis
    int i;
    int nelementos;
    double elementos[5];
    //entrada de dados
    cout << "Quantidade de elementos (1-5)";
    cin >> nelementos;
    while(nelementos < 1 || nelementos > 5)
    {
        cout << "Quantidade de elementos (1-5)";
        cin >> nelementos;
    }
    for(i = 1; i <= nelementos; i++)
    {
        cout << "Digite os " << nelementos << ": ";
        cin >> elementos[i];
    }
    //saida de dados
    cout << "Maior elemento e: " << maior(nelementos, elementos);
    return 0;
}
