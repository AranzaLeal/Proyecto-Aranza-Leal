// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706

//Incluimos los otros programas, ya que aplicaciones es una composicion de la clase Ipod 
#ifndef IPOD_H_
#define IPOD_H_
#include "musica.h"
#include "juegos.h"
#include "multimedia.h"
#include "aplicaciones.h"
#include <iostream>
#include <string>
using namespace std;
// aplicaciones es un componente de la clase ipod 
class Ipod{ 
	private:
		//Atributos de la clase Ipod 
		Multimedia shows[100];
		Juegos games[100];
		Musica music[100];
		int imulti, ijue, imus;
	public:
		//Constructor
		Ipod();
		//Metodos miembros de la clase 
		void muestraMultimedia();
		void ejemploMultimedia();
		void ejemploJuegos();
		void ejemploMusica();
};
		//Constructor por default
		Ipod::Ipod(){
			imulti=0;
			ijue=0;
			imus=0;
		}
		
			
		//Utiliza el arreglo de tipo Multimedia 
		//Los identificadores de Multimedia van del 1 al 99	
		void Ipod::ejemploMultimedia(){
			shows[0]=Multimedia x("Netflix",3);
			shows[1]=Multimedia y("PrimeVideo",2);
			shows[2]=Multimedia z("HBO",4);		
			imulti=3;
		
		}

		
		//Utiliza el arreglo de tipo Juegos
		//Los identificadores de Juegos van del 1 al 99	
		void Ipod::ejemploJuegos(){
			games[0]=Juegos("Minecraft",45,2,23.3);
			games[1]=Juegos("Call of Duty",91,1,54.3);
			games[2]=Juegos("Last of Us",6,2,65.3);
			ijue=3;
		}
		
		//Utiliza el arreglo de tipo Musica 
		//Los identificadores de Musica van del 1 al 99	
		void Ipod::ejemploMusica(){
			music[0]=Musica("Camila Cabello",65,"This Love");
			music[1]=Musica("Ariana Grande",89,"Problem");
			music[2]=Musica("Taylor Swift",109,"Bad Blood");
			imus=3;
		}
		

		
	
#endif

