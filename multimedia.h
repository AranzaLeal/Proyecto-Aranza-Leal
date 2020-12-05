// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706

#ifndef MULTIMEDIA_H_
#define MULTIMEDIA_H_
//Incluimos el programa de Aplicaciones, ya que es nuetsra clase padre 
#include "aplicaciones.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//Clase Multimedia es una clase hija de la clase aplicaciones
class Multimedia: public Aplicaciones{ //Traemos a la Clase Aplicaciones 
	private:
		//Atributos de la Clase Multimedia 
		string entretenimiento;
		int medios; 
		
	public:
		//Construcotes de la Clase Multimedia
		Multimedia();//Constructor por default
		Multimedia(string n, float s, float m, string ent, int med):Aplicaciones(n, s, m){
			entretenimiento = ent;
			medios = med;
		};//Añadimos al constructorde nustra clase padre
		
		
		//Metodos de la Clase Multimedia
		string getEntretenimiento();
		int getMedios(); 
		void setEntretenimiento(string);
		
		string printMultimedia();		
};
		Multimedia::Multimedia(){
			entretenimiento = " ";		
			medios = 0;
		}

//getters 
		//get de entretenimiento
		string Multimedia::getEntretenimiento(){
			return entretenimiento;
		}
		
		//get de medios
		int Multimedia::getMedios(){
			return medios;
		}


//setters
		//set de entretenimiento
		void Multimedia::setEntretenimiento(string visual){
			entretenimiento=visual;
		}
		
		//Almacena mis atributos en una cadena de de texto
		string Multimedia::printMultimedia(){
			std::stringstream v;
			v << printApp() << "Entretenimiento: " << entretenimiento << "\n";
			v << "Medios: " << medios << "\n";
			return v.str();
		}
		
#endif //MULTIMEDIA_H_
