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
    string nombre, departamento;
    int tamanioConsejo; //Suceptible de definición
    int habitantes;//Habitantes o censo de habilitados para votar, Generado al azar
    
    //Atributos Funcionales
	lista<Candidato> CandidatosConsejo;
	lista<Candidato> CandidatosAlcaldia;
	lista<Persona> Habitantes;
	
	//Constructor
	Ciudad(string nombre_, string departamento_, int tamanioConsejo_, int habitantes_) : nombre(nombre_), departamento(departamento_), tamanioConsejo(tamanioConsejo_), habitantes(habitantes_) {}
};

#endif
