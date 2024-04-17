#include "iostream"

using namespace std;

class fruta{
 public:
  string getnome(){return nome;}
  string gettipo(){return tipo;}
  fruta(string n, string t){
    this->nome = n;
    this->tipo = t;
  }
  virtual string descrever(string descrever) {return "tipo = " + tipo + "   nome = " + nome;}
private: 
  string nome;
  string tipo;
};

class generica : public fruta{
public:
  generica(string n, string t):fruta(n,t){}
  string descrever(string t) override {return fruta::descrever(t);}
};

class doce : public fruta{
public:
  doce(string n, string t, string cor):fruta(n,t){}
  string descrever(string t) override {return fruta::descrever(t);}
};

class azeda : public fruta{
public:
  azeda(string n, string t, string comer):fruta(n,t){}
  string descrever(string t) override {return fruta::descrever(t);}
};

int main(){
  generica fruta("maça", "generica");
  doce fruta2( "laranja", "doce", "laranja");
  azeda frta3("banana", "azeda", "comer");
  cout << (fruta.descrever("fruta")) << endl;
  cout << (fruta2.descrever("fruta")) << endl;
  cout << (frta3.descrever("fruta")) << " comendo" << endl;
  return 0;
}
