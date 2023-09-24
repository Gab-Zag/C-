#include "iostream"
#include "iomanip"
using namespace std;
double salariototal(double salario, double preco, double porcentagem, int quantidade)
{
    double total;
    double comisao;
    comisao = (preco * quantidade) * porcentagem / 100;
    total = salario + comisao;
    return total;
}

int main()
{
    //variaveis
    double salario;
    double preco;
    double porcentagem;
    int quantidade;
    //entrada de dados
    cin >> salario;
    cin >> preco;
    cin >> quantidade;
    cin >> porcentagem;
    cout << "Salario total: R$ " << fixed << setprecision(2) <<  salariototal(salario,preco,porcentagem,quantidade);
    return 0;
}
