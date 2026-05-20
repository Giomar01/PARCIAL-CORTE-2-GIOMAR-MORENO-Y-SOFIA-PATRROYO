#ifndef LIBRO_H
#define LIBRO_H


#include<iostream>
#include<string>

/**
 * @class Libro
 * @brief Clase que representa un libro en la biblioteca 
 
 */
class Libro{
    private:

    std:: string titulo;
    std:: string autor;
    std:: string disponible;
    int codigoLibro;


    /**
     * @brief Contructor de la clase Libro
     * @param titulo del curso 
     * @param autor del curso
     * @param disponibles del curso 
     * @param codigoLibro
     * 
     */

    public: 

    Libro(std:: string titulo, std:: string autor, std:: string disponible, int codigoLibro,);

};
#endif