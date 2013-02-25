#include<iostream>
using namespace std;
#include "Monitor.hh"

Monitor::Monitor(){
	
}

Monitor::~Monitor(){
	}
	

void Monitor::Agregar_Usuario(string a, int b, bool c, int d){
	Usuario *user=new Usuario(a, b, c, d);
	usuarios.push_back(*(user));
	}

void Monitor::Eliminar_Usuario(string a, int b){
	  for(int i = 0; i<usuarios.size(); i++){
		  if ((usuarios[i].Obtener_Nombre()== a) && (usuarios[i].Obtener_Cuenta())==b)
			usuarios.erase (usuarios.begin()+i);
		  }
    }
    
Usuario* Monitor::Get_Usuario(string a, int b){

    Usuario *temp;
    
	  for(int i = 0; i<usuarios.size(); i++)
      {
		  if ((usuarios[i].Obtener_Nombre() == a) && (usuarios[i].Obtener_Cuenta() == b))
          {
              temp = &usuarios[i];
          }
          
    }
    
    return temp;

}
