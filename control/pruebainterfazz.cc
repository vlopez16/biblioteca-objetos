/*
	En este archivo se realizara una SIMULACION_INTERFAZ para la
	aplicacion "Biblioteca", en donde se podran utilizar las posibles funciones que se utilizaran
	Si es aprovado este modelo se interfaz se iniciara la implementacion grafica
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (int argc, char* argv[])
{
	cout << endl;
	cout << "Bienvenidos a Jave-Biblioteca" << endl;
	cout << "--------------Menu-----------" << endl;
	cout << "1)-------Crear Usuarios------" << endl;
	cout << "2)--------Ver Usuarios-------" << endl;
	cout << "3)--------Crear Libros-------" << endl;
	cout << "4)----------Ver Libros-------" << endl;
	cout << "5)-----------Salir-----------" << endl;
	cout << endl;
	
	cout << "Ingresa La Accion Que Deseas Realizar ( 1), 2) ,3) 4) ) : "<< endl;
	int entrada;
	cin >> entrada;
	 
	if (entrada == 1){
		cout << "Bienvenido a Crear Usuarios" << endl;
		cout << "Que Deseas Crear estudiante O monitor :"<< endl;
		string crear;
		cin >> crear;
		if (crear == "monitor" || crear == "Monitor"){
			cout << "Por Favor Ingrese el Nombre Completo :" << endl;
			string Nombr;
			cin >> Nombr;
			cout << "El estudiante " << Nombr << endl;
			cout << "Por Favor Ingrese el Id De Estudiante: "<< endl;
			int Id;
			cin >> Id;
			cout << "El Monitor  " << Nombr << "  Id Estudiante "<< Id<< endl;

			//Aqui se llama el metodo Crear Monitor con los y se le dan los parametros que pide Nombre 
			//id y rol como sabemos que va a ser un monitor pues le damos el valor int de 1
			//segun las especificaciones de la clase Usuario
			cout << "" << endl;
		}
		if (crear == "estudiante" || crear == "Estudiante"){
			cout << "Por Favor Ingrese el Nombre Completo :" << endl;
			string Nombr;
			cin >> Nombr;
			cout << "El estudiante " << Nombr << endl;
			cout << "Por Favor Ingrese el Id De Estudiante: "<< endl;
			int Id;
			cin >> Id;
			cout << "El Estudiante  " << Nombr << "  Id Estudiante "<< Id<< endl;

			//Aqui se llama el metodo Crear Estudiante con los y se le dan los parametros que pide Nombre 
			//id y rol como sabemos que va a ser un estudiante pues le damos el valor int de 0
			//segun las especificaciones de la clase Usuario
			cout << "" << endl;
		}
		//al terminar de crear el usuario(estudiate o monitor) se subira a la base de datos
		//con los metodos ya sea subirestudiante o subirmonitor de la clase basededatos 
		//(del grupo base de dats) que tendran como entrada un usuario que sera una instacia de 
		//las clases usuario(Estudiante)(Grupo Usuarios) o monitor 
		/****igualmente en la interfaz grafica pondremos la opcion ir atras para volver al menu
		*****/
	}
	if (entrada == 2){
		cout << "Bienvenido A Ver Usuarios" << endl;
		cout << "por Favor Ingresa el Id Del Usuario" << endl;
		int identrada;
		cin >> identrada;
		cout << "Por Favor Ingresa el Rol (monitor o estudiante) :" << endl;
		string tipoentrada;
		cin >> tipoentrada;
		int rol;
		if (tipoentrada == "Monitor" || tipoentrada == "monitor"){
			cout << "1" << endl;
			rol = 1;
		}
		if (tipoentrada == "Estudiante" || tipoentrada == "estudiante"){
			cout << "0" << endl;
			rol = 0;
		}
		//ahora se llama el metodo cargadatosusuario, dandole como parametros 
		//el rol y el id del estudiante este se encargar de mostrar lo que 
		// que especifique el metodo de la clase Data_Base(Grupo Base de datos)
	}
	if (entrada == 3){
		cout << "Bienvenido A Crear Libros" << endl;
		//Deacuerdo a las especificaciones de las clases del GRUPO COLECCION
		//se solocitaran los parametros necesarios para los metodos que tenga
		// esta clase ya sea CREARLIBROS (si es libro o revista y al igual que en 
		//usuarios se pedira Nombre de libro o revista id de libro o revista si ya
		//estado del libro o revista(si esta o no prestado, para asi mismo agregar
		//o sacar de la base de datos cuando sea necesario))
		//en este metodo crear, por defecto tambien esta subir a la base de datos
		//ya se SUBIRLIBRO o SUBIRREVISTA
		//

	if (entrada == 4){
		cout << "Bienvenido A Cargar Libros" << endl;
		/*en este metodo se solicitara si es libro o revista para tener en cuenta 
		el rol, tambien se solicitara el id o numero de referencia.
		despues de solicitar como entrada esto se llama la funcion de base de datos 
		cargar libro o cargar revista	
		*/
	}
		
	}
	if (entrada == 5){
		cout << "Cerrando... Jave-Biblioteca" << endl;
		cout << "Abortando....." << endl;
		exit(0);
	}
}