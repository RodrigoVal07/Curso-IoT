#include <iostream>

using namespace std;

auto delay_Hs = 1000;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop (){
  cout << "T0 =" << touchRead(T0) << endl; 
  cout << "T3 =" << touchRead(T3) << endl; 
  cout << "Delay =" << delay_Hs << endl;

  cout << "Valor G15=" << touchRead(T3) << endl; 
  cout << "Valor G14=" << touchRead(T4) << endl; 
  cout << "Valor de delay =" << delay_Hs << endl;
  digitalWrite(LED_BUILTIN, HIGH); 
  delay (delay_Hs);
  digitalWrite(LED_BUILTIN, LOW); 
  delay (delay_Hs);

  if (touchRead(T0)< 70) {
    delay_Hs = 500;
  if (touchRead(T4)< 70) {
    delay_Hs -= 200;
  } else if (touchRead(T3) < 60) {
    delay_Hs = 3000;
  }else 
    delay_Hs = 1000;


    delay_Hs += 200;
  }
}
