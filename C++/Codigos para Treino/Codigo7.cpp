
#include "iostream"//sistema de padrão de c++
#include "locale"//biblioteca para a localização em portugues
using namespace std;//sistema de entrada I/O std
int main()
{
    setlocale(LC_ALL, "Portuguese" );//padrão para a liguagem portuguesa
    //variaveis
    int i;//variavel para a estrutura de repetição
    int j;//variavel para a estrutura de repetição
    int k;//variavel para a estrutura de repetição
    int l;//variavel para a estrutura de repetição
    int ordem;//variavel para a quantidade de blocos na matriz
    int matriz[10][10];//variavel para a matriz
    int diagonalp[10];//variavel para a diagonal principal
    int diagonals[10];//variavel para a diagonal secundaria
    //primeira entrada de dados
    cout << "Ordem da matriz: ";//mensagem para o usuario
    cin >> ordem;//entrada do usario
    //teste para a primeira entrada correta
    while(ordem < 1)//estrutura de teste
    {
        cout << "Ordem da matriz: ";//mensagem para o usuario
        cin >> ordem;//entrada do usuario
    }
    while(ordem > 10)//estrutura de teste
    {
        cout << "Ordem da matriz: ";//mensagem para o usuario
        cin >> ordem;//entrada do usuario
    }
    //segundo entrada de dados
    cout << "Elementos da matriz: ";//mensagem para o usuario
    for(i = 0; i < ordem; i++)//estrutura de repetição
    {
        for(j = 0; j < ordem ; j++)//estrutura de repetição
        {
            cin >> matriz[i][j];//entrada do usuario
        }
    }
    //segundo teste
    i = 0;//zerando a variavel da estrutura de repetição
    j = 0;//zerando a variavel da estrutura de repetição
    for(k = 0; k < ordem; k++)//estrutura de repetição
    {
        diagonalp[k] = matriz[i][j];//obetendo os numeros desejados
        i++;//almentando o numero de para a repetição
        j++;//almentando o numero de para a repetição
    }
    i = 0;//zerando a variavel da estrutura de repetição
    j = ordem - 1;//zerando a variavel da estrutura de repetição
    for(l = 0; l < ordem; l++)//estrutura de repetição
    {
        diagonals[l] = matriz[i][j];//obetendo os numeros desejados
        i++;//almentando o numero de para a repetição
        j--;//subtraindo o numero de para a repetição
    }
    //saida de dados
    cout << "Matriz: " << endl;//mensagem para o usuario
    for (i = 0; i < ordem; ++i)//estrutura de repetição
    {
        for ( j = 0; j < ordem; ++j)//estrutura de repetição
        {
            cout << matriz[i][j] << "    ";//mensagem para o usuario
        }
        cout << endl;//mensagem para o usuario
    }
    cout << "Elementos da diagonal principal: ";//mensagem para o usuario
    for(k = 0; k < ordem; k++)//estrutura de repetição
    {
        cout << diagonalp[k] << " ";//mensagem para o usuario
    }
    cout << endl << "Elementos da diagonal secundário: ";//mensagem para o usuario
    for(l = 0; l < ordem; l++)//estrutura de repetição
    {
        cout << diagonals[l] << " ";//mensagem para o usuario
    }
    return 0;
}
