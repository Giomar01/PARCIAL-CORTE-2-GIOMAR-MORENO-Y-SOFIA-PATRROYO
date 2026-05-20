#ifndef USUARIO_H
#define Usuario_h

#include "Persona.h"
/**
 * @class clase Estudiante.
 * @brief clase Estudiante heredada de Persona.
 */
class Usuario : public Persona{
     private:
     int codigoUsuario;
     int cantidadLibrosPrestados;

     public:
     /**
     * @brief Constructor de la clase Persona.
     * @param nombre Nombre de la persona.
     * @param rol cargo o rol que desempeña el sujeto.
     * @param documento documento de la persona.
     * @param edad Edad de la persona.
     * @param codigoUsuario codigo que tiene el usuario.
     * @param cantidadLibrosPrestados cantidad de libros que se le preto al usuario
     */
     Usuario(std::string nombre, std::string rol, int documento, int edad, int codigoUsuario, int cantidadLibrosPrestados );


};
#endif