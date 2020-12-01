//Creación de Objetos para Proyecto: Clase 2
//Aranza Leal Aguirre
//A01751706
//#include ifndef MULTIMEDIA_H_
#define MULTIMEDIA_H_
#include "ipod.h"
#include <iostream>
using namespace std;

class Multimedia: public Ipod {
	private:
		//atributos de la clase multimedia 
		string entretenimiento;
		int aplicaciones; 
		
	public:
		//construcotes de la clase multimedia
		//Multimedia(): entretenimiento(""), aplicaciones (0){}; //por default
		Multimedia(string nombre, float sal, float memo, string entret, int apps):Ipod(nombre,999,128){
			entretenimiento=entret;
			aplicaciones=apps;
		}
		
		
		//funciones
		string entretenimiento();
		int aplicaciones(); 

		
		void setEntretenimiento(string);
		//void AgregarMemoria(float)
};

//getters 
		string getEntretenimiento(){
			return entretenimiento;
		}

		int getAplicaciones(){
			return aplicaciones;
		}


//setters
		void setEntretenimiento(string visual){
			entretenimiento=visual;
		}

/*void Multimedia::AgregarMemoria(float memory){
	for(i=0; i<memory;i++){
		int aux;
		cout<<"Memoria: ";
		cin>>aux;
		canciones[i]=aux;
	}
}*/
};