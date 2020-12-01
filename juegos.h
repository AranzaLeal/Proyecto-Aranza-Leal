//Creación de Objetos para Proyecto: Clase 2
//Aranza Leal Aguirre
//A01751706

#include <iostream>
using namespace std;

class Juegos{
	private:
		//atributos de la clase hija juegos
		string nombrej;
		int numeroj;
		int logros; 
		
	public:
		//constructores de la clase hija juegos
		Juegos(): nombrej(""), numeroj (0), logros(0){}; //por default
		Juegos(string nomj, int numj, float log): nombrej (nomj), numeroj(numj), logros(log){};//Ipod((nombre,999)
		
		
		string get_nombrej();
		int get_numeroj(); 
		int get_logros();
		
		void set_nombrej(string);
		//void AgregarJuegos(int);
};

//getters 
string Juegos::get_nombrej(){
	return nombrej;
}

int Juegos::get_numeroj(){
	return numeroj;
}


int Juegos::get_logros(){
	return logros;
}

//setters
void Juegos::set_nombrej(string name){
	nombrej=name;
}

/*void Juegos::AgregarJuegos(int games){
	for(i=0; i<games;i++){
		int aux;
		cout<<"Juegos: ";
		cin>>aux;
		juegos[i]=aux;
	}
}*/