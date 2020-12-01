//Creación de Objetos para Proyecto: Clase Padre
//Aranza Leal Aguirre
//A01751706

//include ifndef IPOD_H_
//defineIPOD_H_

#include "musica.h"
#include "juegos.h"
#include "multimedia.h"

#include <iostream>
using namespace std;

class Ipod{ 
	private:
	
		string nombreapp;
		float saldo;
		float memoria;
	public:
	
		//Ipod(): nombreapp (""), saldo(0), memoria(0){};
		Ipod(string nombre, float sal, float memo){	
			nombreapp=nombre;
			saldo=sal;
			memoria=memo;
		}
		
		string getNombreapp(){
			return nombreapp;
		}
		
		float getSaldo(){
			return saldo;
		}
		
};
