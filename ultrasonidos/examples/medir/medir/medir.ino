/*EJEMPLO MEDICIÓN CON ultrasonidos.h
Autor: David González Sieiro
2023/03/02*/
#include <ultrasonidos.h>// Incluir librería ultrasonidos.h
#define distancia x.mide(10)/* Definir "distancia" y ejecutar método "mide", cuyo parámetro
será el número de mediciones cuya media aritmética devolverá el método*/
ultrasonidos x(6,5);// Primer parámetro del constructor-> pin Echo, segundo, pin Trig
void setup() {
 Serial.begin(9600);
}
void loop() {
Serial.println(distancia);
}