
//Profesor William Granada / Programa para imprimr en pantalla LCD 16x2 I2C mensajes e incluir un contador de 50 segundos.
//Descargar libreria LiquidCrystal_I2C busacar en : // Programas/incluir libreria/ Administrador de bibliotecas/ LiquidCrystal_I2C
// Incluir librerias wire y  LiquidCrystal_I2C

//Primera Parte
//#include <Adafruit_LiquidCrystal.h>//TinkerCad
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>

//Creamos el objeto lcd con la dirección 0x3F, 16 columnas y 2 filas
LiquidCrystal_I2C lcd(0x3F,16,2);  
//Adafruit_LiquidCrystal lcd(0); //TinkerCad creación de objeto

//Variable segundos inicia en 0
int seconds = 0;


//Segunda Parte
void setup() {
  // Se inicia puerto serial a 9600 baudios, para ver resultados en la IDE de arduino
  Serial.begin(9600);
  // Inicializamos el objeto lcd
  lcd.init();

  //lcd.begin(16,2);//TinkerCad
  //lcd.print("hello world"); //TinkerCad
  
  //Encendemos la luz de fondo.
  lcd.backlight();
  // Escribimos un Mensaje en la pantalla LCD.
  lcd.print("Hola Mundo");
}


//Tercera Parte
void loop() {
   // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  lcd.setCursor(0, 1);
   // Escribimos el número de segundos trascurridos
  lcd.print(millis()/1000);
  lcd.print(" Segundos");
  Serial.println(" Segundos");
  delay(100);

  lcd.print(seconds);
  Serial.println(seconds);
  lcd.setBacklight(1);
  delay(500);
  seconds++;
  if(seconds == 50)
    lcd.clear();
}
