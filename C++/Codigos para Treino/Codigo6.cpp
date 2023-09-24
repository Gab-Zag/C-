#include <iostream>
using namespace std;
//Struct com os valores da chave
struct dado
{
    int k;
    int status; //0-vazio; 1-ocupado; 2-removido
};
//função hash aux
int hash_aux(int k, int m)
{
    int h = k % m;
    if(h < 0)
        h += m;
    return h;
}
//função hash sondagem linear
int hash1(int k, int i, int m)
{
    int h = (hash_aux(k, m) + i) % m; //chamando a função aux
    return h;
}
//função hash inserção de dados
int hash_insert(dado t[], int m, int k)
{
    int i = 0;
    int j;
    do
    {
        j = hash1(k, i, m);// chamando a função Sondagem Linear
        if(t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
        else
            i++;
    }
    while(i != m);
    return -1;
}
//função hash pesquisa
int hash_search(dado t[], int m, int k)
{
    int i = 0;
    int j;
    do
    {
        j = hash1(k, i, m);//chamando a função Sondagem Linear
        if(t[j].k == k)
            return j;
        i++;
    }
    while(t[j].status != 0 || i < m);
    return -1;
}
//função hash remove
int hash_remove(dado t[], int m, int k)
{
    int j = hash_search(t, m, k);
    if(j != -1)
    {
        t[j].status = 2;
        t[j].k = -1;
        return 0;
    } // consegui remover
    else
        return -1; // k nao esta na tabela
}
int main(int argc, char** argv)
{
    dado t[20]; //tabela struct
    int m; //tamanho da tabela
    int c; //aux para os valores das chaves
    int k; //chave a ser pesquisada
    int h; //variavel para função pesquisa
    cin >> m; //entrando com o valor do tamanho da tabela
    //Declarando os valores iniciais
    for(int i = 0; i < m; i++)
    {
        t[i].status = 0;
        t[i].k = -1;
    }
    cin >> c; //entrando com os valores das chaves
    //enviando para o inserção de dados
    while(c != 0)
    {
        hash_insert(t, m, c);
        cin >> c;
    }
    //entrando com a chave a ser procurada e removida
    cin >> k;
    //andando para a função search
    for(int i = 0; i < m; i++)
    {
        h = hash_search(t, m, k);
    }
    hash_remove(t,m,k);
    //Saída de dados caso encontre ou não a chave pesquisada
    for(int i = 0; i < m; i++)
    {
        cout << t[i].k << " ";
    }
    cout << endl;
    return 0;
}
