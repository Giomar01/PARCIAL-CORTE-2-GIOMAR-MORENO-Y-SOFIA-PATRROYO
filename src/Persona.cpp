#include "../include/Persona.h"

Persona::Persona(std::string nombre, int documento, int edad) {
     this->nombre=nombre;
     this->documento=documento;
     this->edad=edad;
}
    Persona::~Persona() {

    }

    void Persona::setNombre(std::string nombre) {
     this->nombre = nombre;
    }

    void Persona::setDocumento(int documento) {
    this->documento = documento;
    }

    void Persona::setEdad(int edad) {
     this->edad = edad;
    }

    std::string Persona::getNombre() {
     return nombre;
    }

    int Persona::getDocumento() {
     return documento;
    }

    int Persona::getEdad() {
     return edad;
    }