# include "data_base.h"
using namespace db;
int main(){
 
  Usuario user1("fuken1",1111,1),user2("fuken2",2222,1),
  user3("fuken3",3333,0),user4("fuken4",4444,0),
  usr5("",0,4);
  
  data_base db;
  int exito, exito2;
  
  exito = db.guardar_datos_usuario(user1);
  exito2 = db.guardar_datos_usuario(user3);
  cout << exito << endl;
  cout << exito2 <<endl;

  //db.guardar_datos_usuario(user2,"Estudiante");
  //db.guardar_datos_usuario(user3,"monitor");
  //db.guardar_datos_usuario(user4,"Monitor");
  //usr5 = db.cargar_datos_usuario(1111,"estudiante");
  //cout << usr5.get_name() << endl;
  //cout << usr5.get_id() << endl;
  //cout << usr5.get_rol() << endl;
  
  
  return 0;
}
