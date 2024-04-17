#include <iostream>

using namespace std;

int main() {
  int x;
  int y;
  int aux;
  cin >> x;
  cin >> y;
  cout << "soma: " << x + y << endl;
  cout << "subtração: " << x - y << endl;
  cout << "multiplicação: " << x * y << endl;
  cout << "divisão: " << x / y << endl;
  if(x < y){
    for(aux = 1; aux <= 10; aux++){
      cout << x << " x " << aux << " = " << x * aux << endl;
    }
  }else if (y < x){
    for(aux = 1; aux <= 10; aux++){
      cout << y << " x " << aux << " = " << y * aux << endl;
    }
  }
}
