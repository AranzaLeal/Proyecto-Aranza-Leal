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
		float imemoria;//memoria predeterminada del Ipod
		float isaldo;//saldo predeterminado del Ipod
		float sumamemoria;//la memoria ocupada por las aplicaciones
		float sumasaldo;//saldo personalizado del usiario
		float saldorestante;//Saldo disponible del usuario
		
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
		void sumaMemoria();
		void sumaSaldo();
		void muestraIpod();
};
		//Constructor por default
		Ipod::Ipod(){
			imulti=0;
			ijue=0;
			imus=0;
			imemoria=280;//unidades en gigabytes
			isaldo=1000000;//un milloon de pesos mexicanos
			sumamemoria=0;
			sumasaldo=0;
			saldorestante=0;
		}
		
			
		//Utiliza el arreglo de tipo Multimedia 
		//Los identificadores de Multimedia van del 1 al 99	
		void Ipod::ejemploMultimedia(){
			Multimedia x("Popcorn",200,30,"Netflix",3);
			Multimedia y("Cuevana", 34, 3.56,"PrimeVideo",2);
			Multimedia z("Disney", 332, 25, "HBO",4);	
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
			Juegos a("Playstation",456,29.89,"Last Of Us",45,223.3);
			Juegos b("Xbox",896,31.00,"Call of Duty",91,154.3);
			Juegos c("Switch", 1235, 12.56,"Minecraft",6,265.3);
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
			Musica m("Spotify",456,4.23,"Camila Cabello",3.2,"Liar");
			Musica n("SamsungMusic",321,5.6,"Ariana Grande",2.6,"Thank Next");
			Musica l("AppleMusic", 789, 8.5,"Taylor Swift",109,"Shake It Off");
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
		
		//Suma las memorias de las aplicaciones del Ipod 
		void Ipod::sumaMemoria(){
			for(int i = 0; i<imulti; i++)
				sumamemoria=sumamemoria+shows[i].getMemoria();
			for(int i = 0; i<ijue; i++)
				sumamemoria=sumamemoria+games[i].getMemoria();
			for(int i = 0; i<imus; i++)
				sumamemoria=sumamemoria+music[i].getMemoria();
		}
		
		//Suma el saldo de las aplicaciones del Ipod 
		void Ipod::sumaSaldo(){
			for(int i = 0; i<imulti; i++)
				sumasaldo=sumasaldo+shows[i].getSaldo();
			for(int i = 0; i<ijue; i++)
				sumasaldo=sumasaldo+games[i].getSaldo();
			for(int i = 0; i<imus; i++)
				sumasaldo=sumasaldo+music[i].getSaldo();
		}
		
		void Ipod::muestraIpod(){
			saldorestante=isaldo-sumasaldo;
			cout<<"Memoria del Ipod: "<<imemoria<<" gigabyte"<<"\n";
			cout<<"Memoria Ocupada del Ipod: "<<sumamemoria<<" gigabyte"<<"\n";
			cout<<"Saldo del Ipod: "<<isaldo<<" mxn"<<"\n";
			cout<<"Saldo Restante del Ipod: "<<sumasaldo<<" mxn"<<"\n";
		}
	
#endif

