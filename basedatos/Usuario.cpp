// Incluimos bibliotecas.
#include "Usuario.h"
// Comenzamos la implementacion de la clase de usuario
Usuario::Usuario(string name, int ident, int rol_){
  
  nombre_usuario = name;
  id_usuario = ident;
  rol = rol_;
}

Usuario::~Usuario(){
}

string Usuario::get_name(){
 return nombre_usuario; 
}

int Usuario::get_id(){
 return id_usuario; 
}

int Usuario::get_rol(){
 return rol; 
}