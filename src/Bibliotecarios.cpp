#include "../include/Bibliotecarios.h"

Bibliotecario::Bibliotecario(std::string nombre, int documento, int edad, int codigoEmpleado, int salario)

: Persona(nombre, documento, edad){

    this->codigoEmpleado = codigoEmpleado;
    this->salario = salario;