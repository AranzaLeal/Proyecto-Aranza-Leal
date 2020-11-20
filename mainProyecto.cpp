//Creación de Objetos para Proyecto
//Aranza Leal Aguirre
//A01751706

#include "musica.h"
#include "juegos.h"
#include "multimedia.h"
#include <iostream>
using namespace std;

int main(){
	//Primera Clase play.h
	Musica a1("Musica de Quique" , 4567, 896.34);
	cout<<a1.get_nombre()<<"\t"<<a1.get_canciones()<<"\t"<<a1.get_espacioDisponible()<<"\t"<<endl;
	
	Musica b2("Musica de Aranza" , 5, 87.00);
	cout<<b2.get_nombre()<<"\t"<<b2.get_canciones()<<"\t"<<b2.get_espacioDisponible()<<"\t"<<endl;
	
	Musica c3("Musica de Michel" , 45, 56.21);
	cout<<c3.get_nombre()<<"\t"<<c3.get_canciones()<<"\t"<<c3.get_espacioDisponible()<<"\t"<<endl;
	
	//SegundaClase juegos.h
	Juegos d4("Videojuegos de Quique" , 4, 89);
	cout<<d4.get_nombrej()<<"\t"<<d4.get_numeroj()<<"\t"<<d4.get_logros()<<"\t"<<endl;
	
	Juegos e5("Videojuegos de Aranza" , 5, 56);
	cout<<e5.get_nombrej()<<"\t"<<e5.get_numeroj()<<"\t"<<e5.get_logros()<<"\t"<<endl;
	
	Juegos f6("Videojuegos de Michel" , 8, 102);
	cout<<f6.get_nombrej()<<"\t"<<f6.get_numeroj()<<"\t"<<f6.get_logros()<<"\t"<<endl;
	
	//Tercera Clase multimedia.h
	Multimedia g7("Netflix" , 56, 32);
	cout<<g7.get_entretenimiento()<<"\t"<<g7.get_aplicaciones()<<"\t"<<g7.get_memoria()<<"\t"<<endl;
	
	Multimedia h8("Prime Video" ,78, 16);
	cout<<h8.get_entretenimiento()<<"\t"<<h8.get_aplicaciones()<<"\t"<<h8.get_memoria()<<"\t"<<endl;
	
	Multimedia i9("YouTube" , 12, 8);
	cout<<i9.get_entretenimiento()<<"\t"<<i9.get_aplicaciones()<<"\t"<<i9.get_memoria()<<"\t"<<endl;
	
}
