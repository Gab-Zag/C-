// C++ code
#include <LiquidCrystal.h>

//lcd
const int rs = 3, en = 4, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Quantidade de pessoas no local
int Pessoas = 0;
int maximadePessoas = 2;
int LedVerde = 5;
int LedVermelho = 7;
int PirEntrada = 6;
int PirSaida = 2;
int ValorSensorEntrada = 0;
int ValorSensorSaida = 0;

void setup()
{
  pinMode(PirEntrada, INPUT);
  pinMode(PirSaida, INPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedVermelho, OUTPUT);
  Serial.begin(9600);
  Serial.println("iniciando Programa...");
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando");
  delay (500);
  lcd.setCursor(8, 1);
  lcd.print("Programa...");
  delay (2000);
  lcd.clear();
  Serial.println("Projeto quantidade de pessoas");
  Serial.println("Projeto Quantidade");
  lcd.setCursor(0, 0);
  lcd.print("Projeto Controla");
  delay(100);
  Serial.println("dor de fluxo");
  lcd.setCursor(0, 1);
  lcd.print("dor de fluxo");
  delay(2000);
  lcd.clear();
  Serial.println("Carregando... ");
  for (int i = 0; i <= 15; i++) 
  {
    lcd.setCursor(0, 0);
    lcd.print("Carregando...");
    lcd.setCursor(i, 1);
    lcd.print("*");
    delay (200);
    lcd.clear();
  	}
   Serial.println("## Carregamento completo ##");
}

//mensagens para as mensagens
void Telaemgeral() 
{
  lcd.setCursor(0, 0);
  lcd.print("Pessoas:");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("Limite:");
  lcd.setCursor(7, 1);
  lcd.print(maximadePessoas);
  delay(500);
}

void validarPessoa()
{
  lcd.setCursor(8, 0);
  lcd.print(Pessoas);
  ValorSensorEntrada = digitalRead(PirEntrada);
  ValorSensorSaida = digitalRead(PirSaida);
  if(ValorSensorEntrada == 1)
  {
    Pessoas = Pessoas + 1;
    if(Pessoas >= maximadePessoas)
    {
      digitalWrite(LedVermelho, HIGH);
      digitalWrite(LedVerde, LOW);
    }
    if(Pessoas < maximadePessoas)
    {
      digitalWrite(LedVerde,HIGH);
      digitalWrite(LedVermelho, LOW);
    }
  }
  if(ValorSensorSaida == 1)
  {
    Pessoas = Pessoas - 1;
    if(Pessoas >= maximadePessoas)
    {
      digitalWrite(LedVermelho, HIGH);
      digitalWrite(LedVerde, LOW);
    }
    if(Pessoas < maximadePessoas)
    {
      digitalWrite(LedVerde,HIGH);
      digitalWrite(LedVermelho, LOW);
    }
  }
}

void loop()
{
  Telaemgeral();
  validarPessoa();
}
