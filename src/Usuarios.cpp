#include "../include/Usuario.h"

Usuario::Usuario(std::string nombre, int documento, int edad, int codigoUsuario, int cantidadLibrosPrestados )
    :Persona(nombre, documento, edad ){
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
     void Usuario::mostrarRol(){

    std::cout << "Rol: Usuario" << std::endl;
    }

     void Usuario::mostrarInformacion(){

    std::cout << "\n===== INFORMACION DEL USUARIO =====\n";

    std::cout << "Nombre: "
              << getNombre() << std::endl;

    std::cout << "Documento: "
              << getDocumento() << std::endl;

    std::cout << "Edad: "
              << getEdad() << std::endl;

    std::cout << "Codigo de usuario: "
              << codigoUsuario << std::endl;

    std::cout << "Cantidad de libros prestados: "
              << cantidadLibrosPrestados << std::endl;

    mostrarRol();
}