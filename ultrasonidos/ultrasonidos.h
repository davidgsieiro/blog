/*Librería ultrasonidos.h
Autor: David González Sieiro
2023/03/02*/
#ifndef ultrasonidos_h
#define ultrasonidos_h
#include "Arduino.h"
class ultrasonidos{
	public:
		ultrasonidos(int echo, int trig);
		float mide(int nMediciones);
		float mide();
	private:
		int _echo;
		int _trig;
};
#endif
