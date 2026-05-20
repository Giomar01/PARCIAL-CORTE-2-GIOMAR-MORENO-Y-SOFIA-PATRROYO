#include "../include/Persona.h"

Persona::Persona(std::string nombre, int documento, int edad) {
     this->nombre=nombre;
     this->documento=documento;
     this->edad=edad;
}
/**
 * @brief Constructor con ciertos parametros.
 * @param nombre Nombre de la persona.
 * @param documento Documento de identidad.
 * @param edad Edad de la persona.
 */
Persona::Persona(std::string nombre,int documento, int edad) {
    this->nombre = nombre;
    this->documento = documento;
    this->edad = edad;
}
/**
 * @brief Destructor virtual de la clase Persona.
 */
Persona::~Persona() {

}