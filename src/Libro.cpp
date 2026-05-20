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
    void Libro::prestarLibro(){

    if(disponible == "Disponible"){

        disponible = "No disponible";

        std::cout << "Libro prestado correctamente"<< std::endl;

    }else{

        std::cout << "El libro no esta disponible" << std::endl;
    }
}

void Libro::devolverLibro(){

    disponible = "Disponible";

    std::cout << "Libro devuelto correctamente" << std::endl;
}

// Getters

int Libro::getCodigoLibro(){

    return codigoLibro;
}

std::string Libro::getDisponible(){

    return disponible;
}

// Setters

void Libro::setTitulo(std::string titulo){

    this->titulo = titulo;
}

void Libro::setAutor(std::string autor){

    this->autor = autor;
}

void Libro::setDisponibles(std::string disponible){

    this->disponible = disponible;
}

void Libro::setCodigoLibro(int codigoLibro){

    this->codigoLibro = codigoLibro;
}