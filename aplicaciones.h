// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
#ifndef APLICACIONES_H_
#define APLICACIONES_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;


//Declaracion de clase Aplicaciones la cual es abstracta (clase padre)
class Aplicaciones {

    protected://Es protected porque en private las demás clases noe podían acceder a los atributos
        //Atributos de la clase Aplicaciones
        string nombreapp;
		float saldo;
		float memoria;
		


    public :
        //Métodos de la clase Aplicaciones
        Aplicaciones();
        Aplicaciones(string nombreapp, float saldo, float memoria);

        string getNombreapp();
		float getSaldo();
        float getMemoria();
		
		string printApp();        
};

 //Constructor por default
Aplicaciones::Aplicaciones(){

    nombreapp = "";
	saldo=0;
	memoria=0;
}

//Constructor con valores para llenar las variables de instancia 
Aplicaciones::Aplicaciones(string name, float sal,float memo){
    nombreapp = name;
	saldo = sal;
	memoria = memo;
}

//Getters
//get de nombreapp
string Aplicaciones::getNombreapp(){

   return nombreapp;

}
//get de saldo
float Aplicaciones::getSaldo(){

    return saldo;

}
//get de memoria 
float Aplicaciones::getMemoria(){
	return memoria;
}

string Aplicaciones::printApp(){
	stringstream a;
	a << "Nombre: " << nombreapp << "\nSaldo: " << saldo << "\n";
	a << "Memorria: " << "\n";
	return a.str();
}
	
#endif //APLICACIONES_H_