#ifndef CIUDAD_H
#define CIUDAD_H

#include <iostream>

#include "Candidato.h"
#include "Persona.h"
#include "lista.h"

using namespace std;

struct Ciudad
{
    //Atributos Reglas de negocio:
    string nombre;
    string departamento;
    int tamanio_consejo; //Suceptible de definición
    //Habitantes o censo de habilitados para votar, Generado al azar
    
    //Atributos Funcionales
	lista<Candidato> CandidatosConsejo;
	lista<Candidato> CandidatosAlcaldia;
	lista<Persona> Habitantes;
};

#endif
