#include <string>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

	const std:: string currentDateTime(){
	time_t now = time(0);
	struct tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), " %d-%m-%y  %X" , &tstruct);
	return buf;
	}

using namespace std;
int a;
int random()
{
	for(int i = 0; i<4; i++)
 	printf(" %d ", rand());
 	return 0;
}


int main () {
	
		int con; string user;
		
	cout<<"Bienvenido a la pagina de ticket o reclamo de la universidad interamericana de panama "<<endl;
	cout<<"ingrese el usuario: "<<endl;
	cin>>user;
	cout<<"ingrese la contrasenia: "<<endl;
	cin>>con;
	
	if ((user == "Gary.estempel@uip.edu.pa" ) && (con == 1270)) {
		"\n";
		cout<<"Credenciales correctas usted ha iniciado en el sistema:\n"<<endl;
		
		cout<<" antes de continuar por favor actualice los datos: "<<endl;
		cout<<" usuario: "<<endl;
		cin>>user;
		cout<<" contraseña: "<<endl;
		cin>>con;
		"\n";
		
			std:: cout  << currentDateTime() << std::endl;
		getchar();
		
		string nombre, apellido, identificacion, correo, carrera , asunto;
		int a;
		cout<<" bienvenido al menu "<<endl;
		cout<<" 1) subir ticket "<<endl;
		cout<<" 2) ver tickets "<<endl;
		cout<<" 3) salir "<<endl;
		cin>>a;
		if(a==1){
			cout<<" 1) subir ticket "<<endl;
			cout<< " nombre: " <<endl;
			cin>>nombre;
			cout<< " apellido: " <<endl;
			cin>>apellido;
			cout<< " identificacion: " <<endl;
			cin>>identificacion;
			cout<< " correo electronico: " <<endl;
			cin>>correo;
			cout<<" carrera que estudia: " <<endl;
			cin>>carrera;
			cout<<" asunto: " <<endl;
			cin>>asunto;
			random();
		
		}
		if(a==2){
		cout<<" 2) ver tickets "<<endl;
		}
		if(a==3){
		
		std:: cout  << currentDateTime () << std::endl;
		getchar();
		}
	}
	else {
		cout<<" Credenciales son incorrectas "<<endl;
	}
	
	return 0;
	}
