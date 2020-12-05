// PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706

//Incluimos las bibliotecas de los otros programas, ya que aplicaciones es una composicion de la clase Ipod 
#ifndef IPOD_H_
#define IPOD_H_
#include "musica.h"
#include "juegos.h"
#include "multimedia.h"
#include "aplicaciones.h"
#include <iostream>
#include <string>
#include <sstream>
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
		void muestraJuegos();
		void ejemploJuegos();  
		void muestraMusica();
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
			Multimedia x("Popcorn",5456,45656.454,"Netflix",3);
			Multimedia y("Cuevana", 34, 3.3,"PrimeVideo",2);
			Multimedia z("Disney", 332, 45.4, "HBO",4);	
			shows[0]= x;
			shows[1]= y;
			shows[2]= z;		
			imulti = 3;
		}
		//Imprime los datos de mis objetos multimedia
		void Ipod::muestraMultimedia(){
			for (int i = 0; i < imulti; i++)
				cout << shows[i].printMultimedia() << "\n";	
		}		
		
		//Utiliza el arreglo de tipo Juegos
		//Los identificadores de Juegos van del 1 al 99	
		void Ipod::ejemploJuegos(){
			Juegos a("Playstation",4562,236.12,"Last Of Us",45,223.3);
			Juegos b("Xbox",5696,456.2,"Call of Duty",91,154.3);
			Juegos c("Switch", 1235, 563.4,"Minecraft",6,265.3);
			games[0]=a;
			games[1]=b;
			games[2]=c;
			 ijue=3;
		}
		
		//Imprime los datos de mis objetos juegos
		void Ipod::muestraJuegos(){
			for (int i = 0; i < ijue; i++)
				cout << games[i].printJuegos();	
			cout<<"\n"<<"Número de juegos"<<ijue<< "\n";
		}	
		
		
		//Utiliza el arreglo de tipo Musica 
		//Los identificadores de Musica van del 1 al 99	
		void Ipod::ejemploMusica(){
			Musica m("Spotify",45623,456.23,"Camila Cabello",3.2,"Liar");
			Musica n("SamsungMusic",1236,52.6,"Ariana Grande",2.6,"Thank Next");
			Musica l("AppleMusic", 8789, 87.5,"Taylor Swift",109,"Shake It Off");
			music[0]=m;
			music[1]=n;
			music[2]=l;
			imus=3;
		}
		
		//Imprime los datos de mis objetos musica
		void Ipod::muestraMusica(){
			for (int i = 0; i < imus; i++)
				cout << music[i].printMusica() << "\n";	
			cout<<"\n"<<"Número de canciones"<<imus;
		}
		

		
	
#endif

