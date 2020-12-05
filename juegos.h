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
		int numerojuegos[100];
		int logros; 
		
	public:
		//Constructores de la Clase Juegos
		Juegos(): nombrejuegos(""), juego(0), logros(0){}; //por default
		Juegos(string nomj, int jueg, int numj, float log): Aplicaciones(nombreapp, saldo, memoria){};//Añadimos al constructorde nustra clase padre
		
		//Metodos
		string get_nombrejuegos();
		int get_juego();
		int get_numerojuegos(); 
		int get_logros();
		
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

//Funcion que añade juegos a través de un contador 
void Juegos::agregarJuegos(int games){
	for(int i=0; i<games;i++){
		cout<<"Juegos: ";
		cin>>numerojuegos[juego];
		juego++;
	}
}

#endif //JUEGOS_H_
