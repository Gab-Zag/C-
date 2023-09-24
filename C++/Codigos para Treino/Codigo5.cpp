#include "iostream"

using namespace std;

int potencia(int n, int a)
{

    if(n == 0)
        return 1;
    if(n > 0)
        return (a * potencia(a, n - 1));
}

int main()
{
    int a;
    int n;
    cin >> a;
    cin >> n;
    cout << potencia(n, a);
    return 0;
}
