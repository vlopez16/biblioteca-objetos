#include "Coleccion.hh"

Coleccion::Coleccion()
{
   
}

Coleccion::~Coleccion()
{
}

Coleccion::void agregarLibro(Libro l)
{
        string gen = l.getgenero ();
		int i;
		for (i=0;i<7;++i)
		{
			if (gen == generos[i])
				break;
		}
		libr[i].append(l);
}
Coleccion:: void agregarrevista(Revista r)
{
	string ma = r.getMateria ();
		int i;
		for (i=0;i<7;++i)
		{
			if (ma == materias[i])
				break;
		}
		revist[i].append(r);

}
}	

Coleccion:: bool  eliminarLibro(Libro l)

{string gen= l.getgenero();
	int h ;
	for (h=0;h<7;++h)
	{
		if gen==generos[h]
			break;
			for (i=0;i<libr.size();++i)
		{
			if (l == materias[i])
				break;
		}


		
		revist[i].append(r);
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
