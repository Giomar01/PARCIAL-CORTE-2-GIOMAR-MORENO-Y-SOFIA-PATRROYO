#ifndef BIBLIOTECARIOS_H
#define BIBLIOTECARIOS_H

#include "Persona.h"

/**
 * @class Bibliotecarios
 * @brief Clase que deriva de Persona que representa un bibliotecario
 * 
 */
class Bibliotecario : public Persona{
private:
 int codigoEmpleado;
 int salario;
};
#endif