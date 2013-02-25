Revista::Revista (int Id; int Nombre; string fecha ; int Edicion, string Materia)
{
    this->Id = Id;
    this->Nombre = Nombre;
    this->fecha = fecha;
    this->Edicion = Edicion;
    this->Materia = Materia;
    this->prestado = false;
}
Revista::~Revista ()
 {
 }
    
Revista::int getId()
{
        cout<<"Su Id es :"<<Id<<endl;
        return Id;
}
Revista:: int getEdicion()
{  
        cout<<"La edicion de la revista es  :"<<Edicion<<endl;
        return Edicion;
        
}

Revista::string getNombre()
{
     cout<<"El nombre de la revista es:"<<Nombre<<endl;
     return Nombre;
}

Revista::string getfecha ()
{
    cout<<"La revista pertenece a la fecha del:"<<fecha<<endl;
    return fecha;
}

Revista:: string getMateria()
{
    cout<<"La revista pertenece a la materia:"<<Materia<<endl;
}
Revista::int setId(int i)
{
    Id=i;
        cout<<"La nueva identificación del libro es : "<<Id<<endl;
    return Id;
}
