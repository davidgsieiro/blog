/*Librería ultrasonidos.h
Autor: David González Sieiro
2023/03/02*/
#include "Arduino.h"
#include "ultrasonidos.h"
ultrasonidos::ultrasonidos(int echo, int trig){
	pinMode(echo, INPUT);
	pinMode(trig, OUTPUT);
	_echo=echo;
	_trig=trig;
}
float ultrasonidos::mide(int nMediciones){
	int contador=0;
	float tiempo,acumulaDistancias=0;
	for(int i=0;i<nMediciones;i++){
		digitalWrite(_trig,0);
		delayMicroseconds(2);
		digitalWrite(_trig,1);
		delayMicroseconds(10);
		digitalWrite(_trig,0);
		acumulaDistancias+=pulseIn(_echo,1)* 0.000001 * 34000.0 / 2.0;
		contador++;
	}
	return acumulaDistancias/contador;
}

float ultrasonidos::mide(){
	int contador=0, nMediciones=1;
	float tiempo,acumulaDistancias=0;
	for(int i=0;i<nMediciones;i++){
		digitalWrite(_trig,0);
		delayMicroseconds(2);
		digitalWrite(_trig,1);
		delayMicroseconds(10);
		digitalWrite(_trig,0);
		acumulaDistancias+=pulseIn(_echo,1)* 0.000001 * 34000.0 / 2.0;
		contador++;
	}
	return acumulaDistancias/contador;
}
