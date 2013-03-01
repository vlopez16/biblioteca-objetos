#include "Libro.hh"


Libro::Libro(int Id, int Edicion, string Nombre,string autor);
{
        this-> Id = Id;
        this->Edicion = Edicion;
        this->Nombre = Nombre;
        this->autor=autor;
        this->prestado=false ;
}

Libro::~Libro()
{
}

Libro:: int getId()
{
        cout<<"Su Id es :"<<Id<<endl;
        return Id;
}
Libro:: int  getEdicion()
{  
        cout<<"La edicion del libro es  :"<<Edicion<<endl;
        return Edicion;
        
}

Libro:: string  getNombre()
{
     cout<<"El nombre del Libro es:"<<Nombre<<endl;
     return Nombre;
}

Libro:: string getautor()
{
        cout<<"El autor del libro es :"<<autor<<endl;
        return autor;
}
Libro:: bool  getprestado()
{
        cout<<"¿Esta prestado?  r// :"<<prestado<<endl;
        return prestado;
}
Libro:: bool  setprestado()
{
        cout<<"Acaba de prestar el libro."<<prestado<<endl;
		this->prestado=true;
        return prestado;
}
Libro:: string  getgenero()
{
        cout<<"¿Esta prestado?  r// :"<<prestado<<endl;
        return prestado;
}
Libro:: void setId(int i)
{
    this->Id=i;
        cout<<"La nueva identificación del libro es : "<<Id<<endl;
      
}
