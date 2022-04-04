@@ -6,16 +6,23 @@ void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop (){

  if(delay_Hs <200){
    delay_Hs=5000;
  }
  if(delay_Hs >5000){
    delay_Hs=200;
  }
  if (touchRead(T4)< 60) {
    delay_Hs -= 200;
  } else if (touchRead(T3) < 60) {
    delay_Hs += 200;
  }
  cout << "Valor G15=" << touchRead(T3) << endl; 
  cout << "Valor G14=" << touchRead(T4) << endl; 
  cout << "Valor de delay =" << delay_Hs << endl;
  digitalWrite(LED_BUILTIN, HIGH); 
  delay (delay_Hs);
  digitalWrite(LED_BUILTIN, LOW); 
  delay (delay_Hs);
  if (touchRead(T4)< 70) {
    delay_Hs -= 200;
  } else if (touchRead(T3) < 60) {
    delay_Hs += 200;
  }
}
