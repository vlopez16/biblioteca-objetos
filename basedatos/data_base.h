#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Usuario.h"

using namespace std;

class data_base{
private:
  fstream monitores_db;
  fstream estudiantes_db;
  fstream libros_db;
  fstream revistas;

public:
  data_base();
  ~data_base();
  int guardar_datos_usuario(Usuario user);
  //void guardar_datos_revista(Revista revista);
  //void guardar_datos_revista(Libro libro);
  Usuario cargar_datos_usuario(int id, int rol);
  //Coleccion cargar_datos_coleccion(int id, string rol);
  
  
};