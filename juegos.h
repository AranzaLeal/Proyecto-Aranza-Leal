// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
#ifndef JUEGOS_H_
#define JUEGOS_H_
//Incluimos el programa de Aplicaciones, ya que es nuetsra clase padre 
#include "aplicaciones.h"
#include <iostream>
using namespace std;
//Clase Juegos es una clase hija de la Clase Aplicaciones 
class Juegos: public Aplicaciones{
	private:
		//atributos de la clase hija juegos
		string nombrejuegos;
		int juego;
		int logros; 
		
	public:
		//Constructores de la Clase Juegos
		Juegos(): nombrejuegos(""), juego(0), logros(0){}; //por default
		Juegos(string n, float s, float m,string nomj, int jueg, float log): Aplicaciones(n, s, m){ //Añadimos al constructorde nustra clase padre
			nombrejuegos=nomj;
			juego=jueg;
			logros=log;
		};
		
		//Metodos
		string get_nombrejuegos();
		int get_juego(); 
		int get_logros();
		string printJuegos();
		void set_nombrejuegos(string);
		void agregarJuegos(int);
};

//getters 
// get de nombrejuegos
string Juegos::get_nombrejuegos(){
	return nombrejuegos;
}
//get de juego
int Juegos::get_juego(){
	return juego;
}

//get logros
int Juegos::get_logros(){
	return logros;
}

//setters
//set de nombrejuegos
void Juegos::set_nombrejuegos(string name){
	nombrejuegos=name;
}

//Almacena mis atributos en una cadena de de texto
string Juegos::printJuegos(){
			std::stringstream k;
			k << printApp() << "Nombre Juego: " << nombrejuegos << "\n";
			k << "Juegos: " << juego << "\n";
			k <<"Logros: "  << logros<< "\n";
			return k.str();
		}

//Funcion que añade juegos a través de un contador 



#endif //JUEGOS_H_
