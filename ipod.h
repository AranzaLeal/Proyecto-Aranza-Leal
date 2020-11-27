//Creación de Objetos para Proyecto: Clase Padre
//Aranza Leal Aguirre
//A01751706

#include ifndef IPOD_H_
#defineIPOD_H_

#include "musica.h"
#include "juegos.h"
#include "multimedia.h"

#include <iostream>
using namespace std;

class Ipod{ 
	private:
	
		string nombreapp;
		float saldo[10000];
	public:
	
		Ipod(): nombreapp (""), saldo(0){};
		Ipod(string nombre, float saldo): nombreapp(nombre), saldo(sald){};
		
		string getNombreapp(){
			return nombreapp;
		}
		
		float getSaldo(){
			return saldo;
		}
		
}
