//Creación de Objetos para Proyecto: Clase 1
//Aranza Leal Aguirre
//A01751706
#include <iostream>
using namespace std;
//Se define la clase, es este caso la clase son cuentas de PlayStation.
class Play{
	//En privado ponemos los atributos
	private:
		//Mis atributos serán: nombre de usuario, amigos añadidos y saldo en la cuenta
		string nombre;
		int amigos;
		float saldo; 
	
	//Mientras que los métodos los ponemos en público.
	public:
		Play(): nombre(""), amigos (0), saldo(0){}; //por default
		Play(string nom, int ami, float sal): nombre (nom), amigos(ami), saldo(sal){}; 
		//Se nos mostraran las variables 
		string get_nombre();
		int get_amigos(); 
		float get_saldo();
		
		void set_nombre(string);
		
};

//getters 
string Play::get_nombre(){
	return nombre;
}

int Play::get_amigos(){
	return amigos;
}

float Play::get_saldo(){
	return saldo;
}

//setters
void Play::set_nombre(string usuario){
	nombre=usuario;
}

