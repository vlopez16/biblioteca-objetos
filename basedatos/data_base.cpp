#include "data_base.h"


//using namespace std;

data_base::data_base(){
}

data_base::~data_base(){
}



int data_base::guardar_datos_usuario(Usuario user){
  int rol_ = user.get_rol();
  if (rol_ == 1)
  {
    estudiantes_db.open("data_base/estudiante.db", fstream::in | fstream::out | fstream::app);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    string linea,vacio;
    int cc;
    int id_tmp = user.get_id();
    while (!estudiantes_db.eof()){
      getline(estudiantes_db,linea);
      stringstream(linea) >> cc;
      getline(estudiantes_db,linea);
      getline(estudiantes_db, vacio);
      if(cc == id_tmp){
        estudiantes_db.close();
        return 0;
      }
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    estudiantes_db.close();
    estudiantes_db.open("data_base/estudiante.db", fstream::in | fstream::out | fstream::app);

    estudiantes_db << user.id_usuario << endl;
    estudiantes_db << user.nombre_usuario << endl << endl;
    estudiantes_db.close();
    return 1;
  }
  else 
  {
    if (rol_ == 0)
    {
      monitores_db.open("data_base/monitor.db", fstream::in | fstream::out | fstream::app);
      //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      string linea,vacio;
      int cc;
      int id_tmp = user.get_id();
      while (!monitores_db.eof()){
        getline(monitores_db,linea);
        stringstream(linea) >> cc;
        getline(monitores_db,linea);
        getline(monitores_db, vacio);
        if(cc == id_tmp){
          monitores_db.close();
          return 0;
        }
      }
      //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      monitores_db.close();
      monitores_db.open("data_base/monitor.db", fstream::in | fstream::out | fstream::app);
      monitores_db << user.id_usuario << endl;
      monitores_db << user.nombre_usuario << endl << endl;
      monitores_db.close();
      return 1;
    }
  }
  return 0;
}



Usuario data_base::cargar_datos_usuario(int id, int rol_){
  string linea,vacio;
  int cc;
  Usuario usr_def("",0,-1);
  if (rol_ == 1)
  {
    estudiantes_db.open("data_base/estudiante.db", fstream::in | fstream::out | fstream::app);
    while (!estudiantes_db.eof()){
      getline(estudiantes_db,linea);
      stringstream(linea) >> cc;
      getline(estudiantes_db,linea);
      getline(estudiantes_db, vacio);;
      if (id == cc){
        Usuario usr(linea, cc, 1);
        estudiantes_db.close();
        return usr;
      }
    }
    estudiantes_db.close();
    
    return usr_def;
  }
  else 
  {
    if (rol_ == 0)
    {
      monitores_db.open("data_base/monitor.db", fstream::in | fstream::out | fstream::app);
      while (!estudiantes_db.eof()){
        getline(estudiantes_db,linea);
        stringstream(linea) >> cc;
        getline(estudiantes_db,linea);
        getline(estudiantes_db, vacio);
        if (id == cc){
          Usuario usr(linea, cc, 0);
          estudiantes_db.close();
          return usr;
        }
      }
      monitores_db.close();
      return usr_def;
    }
  }
  return usr_def;
}