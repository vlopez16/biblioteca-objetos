#include <iostream>
#include <cstdlib>  
#include <cstdio>   
#include <vector>
#include <string>

using namespace std;

class Libro
{
	private:
				int Id;
                int Edicion;
                string Nombre;
                string autor;
                bool prestado;
				string genero;
public:

                Libro(int Id, int Edicion, string Nombre,string autor);
                ~Libro();
                int getId();
                int getEdicion();
                string getNombre();
                string getautor();
                void setId(int i);
				void setprestado();
				void getprestado();
				string getgenero();

                        
};
