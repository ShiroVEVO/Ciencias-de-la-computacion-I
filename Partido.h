#ifndef PARTIDO_H
#define PARTIDO_H

#include <iostream>

#include "Ciudad.h"
#include "lista.h"

using namespace std;

struct Partido{
    //Atributos Reglas de negocio:
	string nombre;
    string representante_legal;
    
    //Atributos Funcionales
    lista<Ciudad> ciudadesActivas;
};    

#endif
