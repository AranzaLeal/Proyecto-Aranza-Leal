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
		float tiempo;
		string cancion;
	
	public:
		//Musica(): nombreartista(""), canciones (0), nombresCanciones(""){}; //por default
		//Constructores de la Clase Musica
		Musica();
		Musica(string n, float s, float m, string nomart, float tiem, string can):Aplicaciones(n, s, m){//Añadimos al constructorde nustra clase padre
			nombreartista=nomart;
			tiempo=tiem;
			cancion=can;
		};
		 
		string get_nombreartista(); 
		float get_tiempo();
		string get_cancion();
		void set_nombreartista(string);
		string printMusica();
		
};

Musica::Musica(){
			nombreartista = " ";		
			tiempo = 0;
			cancion=" ";
		}
//getters 
//get de nombreartista
string Musica::get_nombreartista(){
	return nombreartista;
}

//get de tiempo
float Musica::get_tiempo(){
	return tiempo;
}
//get de album
string Musica::get_cancion(){
	return cancion;
}

//setters
//set de nombre artista 
void Musica::set_nombreartista(string nameartist){
	nombreartista=nameartist;
}

//Almacena mis atributos en una cadena de de texto
string Musica::printMusica(){
			std::stringstream c;
			c << printApp() << "Nombre del Artista: " << nombreartista << "\n";
			c << "Tiempo de la Canción: " << tiempo << "\n";
			c <<"Nombre de la Canción: "  << cancion<< "\n";
			return c.str();
		}


#endif //MUSICA_H_

