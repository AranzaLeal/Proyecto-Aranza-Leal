//Creación de Objetos para Proyecto: Clase 2
//Aranza Leal Aguirre
//A01751706

#include <iostream>
using namespace std;

class Multimedia{
	private:
		//atributos de la clase multimedia 
		string entretenimiento;
		int aplicaciones;
		float memoria; 
		
	public:
		//construcotes de la clase multimedia
		Multimedia(): entretenimiento(""), aplicaciones (0), memoria(0){}; //por default
		Multimedia(string entret, int apps, float memo): entretenimiento(entret), aplicaciones(apps), memoria(memo){};
		
		//funciones
		string get_entretenimiento();
		int get_aplicaciones(); 
		float get_memoria();
		
		void set_entretenimiento(string);
		//void AgregarMemoria(float)
};

//getters 
string Multimedia::get_entretenimiento(){
	return entretenimiento;
}

int Multimedia::get_aplicaciones(){
	return aplicaciones;
}


float Multimedia::get_memoria(){
	return memoria;
}

//setters
void Multimedia::set_entretenimiento(string visual){
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