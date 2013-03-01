///Clase coleccion 
//Colección.hh
#include <vector>
#include <iostream>
#include <cstdlib>  
#include <cstdio>   
using namespace std;

class Coleccion
{
    public:
		string generos[7] = {"Mitologia", "Ciencias", "Artes", "Ficcion", "Deportes", "Culinaria", "Historia"};
		vector <Libro> libr [7];
        string materias [7] = {"fisica", "matematicas", "economia", "computacion", "entretenimiento", "novedades", "cocina";
        vector <Revistas> revist [7];
		void agregarLibro(Libro l);
		void agregarrevista(Revista r);
		void eliminarLibro(Libro l);
		void eliminarRevista(Revista r);
		bool buscarLibro(string nombre,int edicion,string autor,int id,string genero);
		bool buscarRevista(string nombre,int Id,int edicion,string materia,string fecha);
		Coleccion ();
		~Coleccion ();

	
        
}
