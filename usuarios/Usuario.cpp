#include "Usuario.hh"
using namespace std;

Usuario::Usuario(string name, int account, bool estate, int role): nombre(name), numero_cuenta(account), estado_cuenta(estate), rol(role) {}
//
//{
//	nombre = name;
//	numero_cuenta = account;
//	estado_cuenta = estate;
//	rol = role;
//}

Usuario::~Usuario() {}
	

string Usuario::Obtener_Nombre()
{
	return nombre;
}

int Usuario::Obtener_Cuenta()
{
    return numero_cuenta;
    
}

bool Usuario::Obtener_Estado_Cuenta()
{
    return estado_cuenta;
}
	
int Usuario::Obtener_Rol()
{
    return rol;
}
	
