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
    int ordem;//variavel para a quantidade de blocos na matriz
    int matriz[10][10];//variavel para a matriz
    int somadp = 0;//variavel para a Soma dos elementos da diagonal principal
    int somaadp = 0;//variavel para a Soma dos elementos acima da diagonal principal
    int somabdp = 0;//variavel para a Soma dos elementos abaixo da diagonal principal
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
    //Soma dos elementos da diagonal principal
    for(k = 0; k < ordem; k++)//estrutura de repetição
    {
        somadp = somadp +  matriz[i][j];//obetendo os numeros desejados
        i++;//almentando o numero de para a repetição
        j++;//almentando o numero de para a repetição
    }
    //Soma dos elementos acima da diagonal principal
    i = 0;//zerando a variavel da estrutura de repetição
    for(j = ordem - 1; j > i; j--)//estrutura de repetição
    {
        somaadp = somaadp + matriz[i][j];//obetendo os numeros desejados
    }
    i++;//almentando o numero de para a repetição
    for(j = ordem - 1; j > i; j-- )//estrutura de repetição
    {
        somaadp = somaadp + matriz[i][j];//obetendo os numeros desejados
    }
    //Soma dos elementos abaixo da diagonal principal
    i = 1;
    j = 0;
    somabdp = somabdp + matriz[i][j];
    i = ordem - 1;
    for(j = 0; j < i; j++)
    {
        somabdp = somabdp + matriz[i][j];
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
    cout << "Soma dos elementos da diagonal principal: " << somadp << endl;//mensagem para o usuario
    cout << "Soma dos elementos acima da diagonal principal: " << somaadp << endl;//mensagem para o usaurio
    cout << "Soma dos elementos abaixo da diagonal principal " << somabdp << endl;
    return 0;
}
