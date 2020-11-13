//Creación de Objetos para Proyecto: Clase 2
//Aranza Leal Aguirre
//A01751706

#include <iostream>
using namespace std;

class Juegos{
	private:
		string nombrej;
		int numeroj;
		int logros; 
		
	public:
		Juegos(): nombrej(""), numeroj (0), logros(0){}; //por default
		Juegos(string nomj, int numj, float log): nombrej (nomj), numeroj(numj), logros(log){};
		
		//void crece(float);
		
		string get_nombrej();
		int get_numeroj(); 
		int get_logros();
		
		void set_nombrej(string);
		
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

