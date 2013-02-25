#ifndef MONITOR_H_
#define MONITOR_H_
#include <iostream>
#include "Usuario.hh"
#include <vector>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;



class Monitor
{
	private:
	
		string nombre;
        vector<Usuario> usuarios;
		int numero_cuenta; //ID
		int rol; // 1=Estudiante, 2=Monitor
	
	public:
		Monitor();
			void Agregar_Usuario(string a, int b, bool c, int d);  //El monitor tiene permiso de crear un nuevo usuario
			void Eliminar_Usuario(string a, int b);  //Recibe el nombre y numero de cuenta del usuario y lo elimina
			Usuario* Get_Usuario(string a, int b); //Retorna el Usuario
			
			
		~Monitor();
};
    

#endif
