// Clase revista
/// Revista.hh
#include <iostream>
#include <cstdlib>  
#include <cstdio>   
#include <vector>
#include <string>
using namespace std;
class Revista
{
public:
    int Id;
    string Nombre;
    string fecha;
    int Edicion;
    string Materia:
    bool prestado;
    
    Revista (int Id; int Nombre; string fecha ; int Edicion, string Materia);
    ~Revista ();
    int getId();
    string getfecha ();
    int getEdicion();
    string getNombre();
    string getMateria();
    void setId(int i);
	string getmateria();
	string setprestado();
	string getprestado();

};
