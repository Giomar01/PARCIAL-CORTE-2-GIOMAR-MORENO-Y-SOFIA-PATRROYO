#ifndef USUARIO_H
#define USUARIO_h

#include "Persona.h"
/**
 * @class clase Usuario.
 * @brief clase Usuario heredada de Persona.
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
     Usuario(std::string nombre, int documento, int edad, int codigoUsuario, int cantidadLibrosPrestados );

     /**
      * @brief modifica el codigo del usuario.
      * @param codigoUsuario nuevo codigo.
      */
     void setCodigoUsuario(int codigoUsuario);
     /**
      * @brief modifica la cantidad de libros prestada.
      * @param cantidadLibrosPrestada    nueva cantidad
      */
     void setCantidadLibrosPrestados(int cantidadLibrosPrestados);
     /**
      * @brief obtiene el codigo del usuario
      * @return codigo usuario.
      */
     int getCodigoUsuario();
     /**
      * @brief obtiene cantidad de libros prestada
      * @return cantidad de libros.
      */
     int getCantidadLibrosPrestados();
     /**
      * @brief muestra el rol del usuario.
      */
     void mostrarRol() override;
     /**
      * @brief muestra la informacion del usuario.
      */
     void mostrarInformacion() override; 
};
#endif