//Creación de Objetos para Proyecto
//Aranza Leal Aguirre
//A01751706

#include "musica.h"
#include "juegos.h"
#include "multimedia.h"
#include "aplicaciones.h"
#include "ipod.h"
#include <iostream>
using namespace std;

/**
*Descripción del programa:
*Es un programa que captura los diferentes tipos de datos que recibe el ipod,
*este Ipod tiene diferentes aplicaciones como Multimedia, juegos y música.
*La calse Aplicaciones es uuna composicion de la clase ipod.
*Mientras que Musica, Juegos y Multimedia son clsas hijas de la clase Aplicaciones*/

int main(){
	
	Ipod mp3;
	mp3.ejemploMultimedia();
	cout<<"Informacion sobre la multimedia del iPod"<<"\n";
	mp3.muestraMultimedia();
	mp3.ejemploJuegos();
	cout<<"Informacion sobre los videojuegos del iPod"<<"\n";
	mp3.muestraJuegos();
	mp3.ejemploMusica();
	cout<<"Informacion sobre la música del iPod"<<"\n";
	mp3.muestraMusica();
	mp3.sumaMemoria();
	mp3.sumaSaldo();
	cout<<"Información del Ipod"<<"\n";
	mp3.muestraIpod();
	
	return 0;	
}
	


