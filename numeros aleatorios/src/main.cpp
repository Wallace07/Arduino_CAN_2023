//randomSeed(analogRead(0));
void setup(){
  Serial.begin(9600);
  // De preferencia un pin al que no esté conectado nada
  randomSeed(analogRead(0));
  // Si quieres, aquí ya puedes obtener aleatorios
  int aleatorio = random(0, 10); // Regresa un número del 0 al 9
}

void loop(){
  // Aquí también se pueden obtener:
  int aleatorio = random(0, 2);
  //Serial.println(random); // Regresa un número del 0 al 1
}