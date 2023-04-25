#ifndef PARTIDO_H
#define PARTIDO_H

#include <iostream>

#include "Ciudad.h"
#include "lista.h"

using namespace std;

struct Partido{
    //Atributos Reglas de negocio:
	string nombre, representanteLegal;
	
    //Atributos Funcionales
    lista<Ciudad> ciudadesActivas;
    
    //Constructor
    Partido(string nombre_, string representanteLegal_) : nombre(nombre_), representanteLegal(representanteLegal_) {}
    
	};

#endif
