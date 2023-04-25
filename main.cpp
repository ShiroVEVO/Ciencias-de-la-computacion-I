#include <cstdlib>
#include <iostream>

#include "Persona.h"
#include "lista.h"

using namespace std;

int main(int argc, char *argv[]){
	struct tm fechaNacimiento = {0, 0, 0, 1, 0, 100};
	Persona p("Juan", "Perez", 123456789, 'M', "Soltero", "Medellin", "Bogota", fechaNacimiento);
	lista<Persona> x;
	x.insertar_inicio(p);
	
}

