#include "../include/Usuario.h"

Usuario:: Usuario(std::string nombre, std::string rol, int documento, int edad, int codigoUsuario, int cantidadLibrosPrestados )
    :Persona(nombre, rol, documento, edad ){
        this->codigoUsuario=codigoUsuario;
        this->cantidadLibrosPrestados=cantidadLibrosPrestados;
    }
     void Usuario::setCodigoUsuario(int codigoUsuario){
        this->codigoUsuario=codigoUsuario;
     }
     void Usuario::setCantidadLibrosPrestados(int cantidadLibrosPrestados){
        this->cantidadLibrosPrestados=cantidadLibrosPrestados;
     }
     int Usuario::getCodigoUsuario(){
        return codigoUsuario;
     }
     int Usuario::getCantidadLibrosPrestados(){
        return cantidadLibrosPrestados;
     }
     void Usuario::mostrarInformacion(){
        
     }