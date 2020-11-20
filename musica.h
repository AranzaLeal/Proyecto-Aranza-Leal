//Creación de Objetos para Proyecto: Clase 1
//Aranza Leal Aguirre
//A01751706
#include <iostream>
using namespace std;
//Se define la clase, es este caso la clase son cuentas de PlayStation.
class Musica{
	//En privado ponemos los atributos
	private:
		//Mis atributos serán: nombre de usuario, amigos añadidos y saldo en la cuenta
		string nombre;
		int canciones;
		float espacioDisponible; 
	
	//Mientras que los métodos los ponemos en público.
	public:
		Musica(): nombre(""), canciones (0), espacioDisponible(0){}; //por default
		Musica(string nom, int can, float esp): nombre (nom), canciones(can), espacioDisponible(esp){}; 
		//Se nos mostraran las variables 
		string get_nombre();
		int get_canciones(); 
		float get_espacioDisponible();
		
		void set_nombre(string);
		//void AgregarCanciones(int);
		
};

//getters 
string Musica::get_nombre(){
	return nombre;
}

int Musica::get_canciones(){
	return canciones;
}

float Musica::get_espacioDisponible(){
	return espacioDisponible;
}

//setters
void Musica::set_nombre(string usuario){
	nombre=usuario;
}

/*void Musica::AgregarCanciones(int songs){
	for(i=0; i<songs;i++){
		int aux;
		cout<<"Canciones: ";
		cin>>aux;
		canciones[i]=aux;
	}
}/*
// intente poner una funcion que agregue el numero de canciones pero deice que la i no esta definida, consultare en asesoría.

