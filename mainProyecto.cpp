//Creación de Objetos para Proyecto
//Aranza Leal Aguirre
//A01751706

#include "musica.h"
#include "juegos.h"
#include "multimedia.h"
#include "aplicaciones.h"
#include "ipod.h"
//#include "ipod.h"
#include <iostream>
using namespace std;

/**
*Descripción del programa:
*Es un programa que captura los diferentes tipos de datos que recibe el ipod,
*este Ipod tiene diferentes aplicaciones como Multimedia, juegos y música.
*La calse Aplicaciones es uuna composicion de la clase ipod.
*Mientras que Musica, Juegos y Multimedia son clsas hijas de la clase Aplicaciones*/

/**
*Profesor, todo lo que ve comentado es el primer main que realice,
*al intentar hacer el nuevo main, colapso y me descompuso lo anterios, y se perdio el archivo.
*Asi que le deje el primer main, el main lamentablemente no funciona*/
int main(){
	
	Ipod mp3;
	mp3.ejemploMultimedia();
	mp3.ejemploJuegos();
	mp3.ejemploMusica();
	
	/*
	//Primera Clase musica.h
	Musica a1("Musica de Quique" , 0, 896.34);
	a1.agregarCanciones(5);
	cout<<a1.get_nombreartista()<<"\t"<<a1.get_canciones()<<endl;
	
	Musica b2("Musica de Aranza" , 0, 87.00);
	b2.agregarCanciones(15);
	cout<<b2.get_nombreartista()<<"\t"<<b2.get_canciones()<<endl;
	
	Musica c3("Musica de Michel" , 0, 56.21);
	c3.agregarCanciones(10);
	cout<<c3.get_nombreartista()<<"\t"<<c3.get_canciones()<<endl;
	
	//SegundaClase juegos.h
	Juegos d4("Videojuegos de Quique" , 0, 89);
	d4.numerojuegos(8);
	cout<<d4.get_nombrejuegos()<<"\t"<<d4.get_juego()<<"\t"<<d4.get_logros()<<"\t"<<endl;
	
	Juegos e5("Videojuegos de Aranza" , 0, 56);
	e5.numerojuegos(4);
	cout<<e5.get_nombrejuegos()<<"\t"<<e5.get_juego()<<"\t"<<e5.get_logros()<<"\t"<<endl;
	
	Juegos f6("Videojuegos de Michel" , 0, 102);
	f6.numerojuegos(2);
	cout<<f6.get_nombrejuegos()<<"\t"<<f6.get_juego()<<"\t"<<f6.get_logros()<<"\t"<<endl;
	
	//Tercera Clase multimedia.h
	Multimedia g7("Netflix" , 56, 32);
	cout<<g7.set_entretenimiento()<<"\t"<<g7.get_aplicaciones()<<"\t"<<g7.get_memoria()<<"\t"<<endl;
	
	Multimedia h8("Prime Video" ,78, 16);
	cout<<h8.set_entretenimiento()<<"\t"<<h8.get_aplicaciones()<<"\t"<<h8.get_memoria()<<"\t"<<endl;
	
	Multimedia i9("YouTube" , 12, 8);
	cout<<i9.set_entretenimiento()<<"\t"<<i9.get_aplicaciones()<<"\t"<<i9.get_memoria()<<"\t"<<endl;
	
}*/

