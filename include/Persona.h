#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>


/**
 * @class Persona
 * @brief clase Persona abstracta del sistema.
 */
class Persona{
    private:
    std::string nombre, rol;
    int documento, edad;

    public:

    /**
     * @brief Constructor de la clase Persona.
     * @param nombre Nombre de la persona.
     * @param rol cargo o rol que desempeña el sujeto.
     * @param documento documento de la persona.
     * @param edad Edad de la persona.
     */
    Persona(std::string nombre, std::string rol, int documento, int edad );

    virtual ~Persona();

    

};
#endif