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
    std::string nombre;
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

    /**
     * @brief modifica el nombre de la persona.
     * @param nombre nuevo nombre.
     */
    void setNombre(std::string nombre);
   
    /**
     * @brief modifica el documento de la persona.
     * @param documento nuevo documento.
     */
    void setDocumento(int documento);
    /**
     * @brief modifica la edad de la persona.
     * @param edad nueva edad.
     */
    void setEdad(int edad);
    /**
     * @brief obtiene el nombre de la persona.
     * @return nombre de la persona.
     */
    std::string getNombre();
     /**
     * @brief obtiene documento de la persona.
     * @return documento de la persona.
     */
    int getDocumento();
     /**
     * @brief obtiene edad de la persona.
     * @return edad de la persona.
     */
    int getEdad();

    /**
     * @brief muestra el rol de la persona.
     */
    virtual void mostrarRol() =0;

    /**
     * @brief Metodo virtual puro para mostrar informacion.
     */
    virtual void mostrarInformacion() =0;

};
#endif