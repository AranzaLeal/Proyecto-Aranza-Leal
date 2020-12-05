// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
#ifndef MUSICA_H_
#define MUSICA_H_
//Incluimos el programa de Aplicaciones, ya que es nuetsra clase padre 
#include"aplicaciones.h"
#include <iostream>
using namespace std;
//Clase Musica es una clase hija de la Clase Aplicaciones
class Musica: public Aplicaciones{
	
	private:
		//Atributos de la Clase Musica
		string nombreartista;
		int canciones;
		string nombresCanciones[100];
	
	public:
		//Musica(): nombreartista(""), canciones (0), nombresCanciones(""){}; //por default
		//Constructores de la Clase Musica
		Musica();
		Musica(string nomart, int can, string nomcan): Aplicaciones(nombreapp, saldo, memoria){};//Añadimos al constructorde nustra clase padre
		 
		string get_nombreartista();
		//int canciones();
		int get_canciones(); 
		
		void set_nombreartista(string);
		void set_nombresCanciones(string);
		void agregarCanciones(int);
		
};

//getters 
//get de nombreartista
string Musica::get_nombreartista(){
	return nombreartista;
}

//get de canciones
int Musica::get_canciones(){
	return canciones;
}


//setters
//set de nombre artista 
void Musica::set_nombreartista(string nameartist){
	nombreartista=nameartist;
}

//Funcion que añade canciones a través de un contador 
void Musica::agregarCanciones(int songs){
	for(int i=0; i<songs;i++){
		cout<<"Canciones: ";
		cin>>nombresCanciones[canciones];
		canciones++;
	}
}

#endif //MUSICA_H_

