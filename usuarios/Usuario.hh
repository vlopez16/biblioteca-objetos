#ifndef USUARIO_H_
#define USUARIO_H_
#include <iostream>
#include <string>

using namespace std;



class Usuario
{
	private:
	
		string nombre; //Nombre del usuario
		int numero_cuenta; //ID
		bool estado_cuenta;  //True = no tiene multa ; False = si tiene multa
		int rol; // 1=Estudiante, 2=Monitor
		int librosPrestados[7]; //Puede tener un máximo de 7 libros prestados
	
	public:
        
		Usuario(string name, int account, bool estate, int role);  // nombre, numero de cuenta, estado de cuenta, rol
			
			string Obtener_Nombre();
			int Obtener_Cuenta();
			bool Obtener_Estado_Cuenta(); // Retorna True si no tiene multa // Retorna False si la cuenta no esta en buen estado (tiene multa)
			int Obtener_Rol();
			
		~Usuario();
};


#endif
    
