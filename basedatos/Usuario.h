#ifndef USUARIO_
#define USUARIO_

/*  Definimos la clase usuario con la que podra acceder a las cuentas 
	y poder retirar plata.
*/


//--------------//
// Usuario
//--------------//


//-------------
// Atributos
//-------------

/*
- Nombre usuario.
- Primer apellido usuario.
- Segundo apellido usuario.
- Contraseña usuario.
- tarjeta (objeto) del usuario.
*/

//-------------
// Metodos
//-------------

/*
+ Retirar dinero.
+ Consultar cuenta.
*/

#include <string>
using namespace std;

class Usuario{
	public:
		string nombre_usuario;
		int rol;
		int id_usuario;
	public:
		Usuario(string nombre, int ident, int rol_);
		~Usuario();
		string get_name();
		int get_id();
		int get_rol();
};


#endif
