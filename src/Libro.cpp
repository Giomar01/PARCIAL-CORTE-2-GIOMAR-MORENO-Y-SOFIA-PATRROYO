#include "../include/Libro.h"

Libro::Libro(std:: string titulo,std:: string autor,std::string disponible,int codigoLibro){

    this->titulo = titulo;
    this->autor = autor;
    this->disponible = disponible;
    this->codigoLibro = codigoLibro;
}
    void Libro::mostrarInformacion(){

    std::cout << "===== INFORMACION DEL LIBRO =====" << std::endl;

    std::cout << "Titulo: "
              << titulo << std::endl;

    std::cout << "Autor: "
              << autor << std::endl;

    std::cout << "Codigo: "
              << codigoLibro << std::endl;

    std::cout << "Disponibilidad: "
              << disponible << std::endl;
    }
    