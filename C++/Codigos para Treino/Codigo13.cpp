#include <iostream>
using namespace std;
int main()
{
    //variaveis
    double x;
    double y;
    double resultado;
    char simbolo;
    //entrada de dados
    cout << "Entre com  o valor de x: " << endl;
    cin >> x;
    cout << "Certo agora entre com o valor de y: " << endl;
    cin >> y;
    cout << "Ok ja estamos terminando selecione a sua expreção desejada:" << endl;
    cout << "+ , - , * , /";
    cin >> simbolo;
    //contas
    switch(simbolo)
    {
        case '+': cout << x + y;
        break;
        case '-': cout << x - y;
        break;
        case '*': cout << x * y;
        break;
        case '/': cout << x / y;
        break;
    }

    return 0;
}
