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

    public:
    /**
     * @brief Contructor de la clase Libro
     * @param titulo del curso 
     * @param autor del curso
     * @param disponibles del curso 
     * @param codigoLibro
     * 
     */
    Libro(std:: string titulo, std:: string autor, std:: string disponible, int codigoLibro);
//Metodos 

/**
 * @brief Muestra informacion del libro, presta y devuelve el libro
 * 
 */
void mostrarInformacion();
void prestarLibro();
void devolverLibro();
  

//Getters

    /**
     * @brief obtiene el libro 
     * @return  libro 
     * 
     */

    int getCodigoLibro();
    std::string getDisponible();

    //Setters 

    /**
     * @brief Modifica a la clase libro 
     * @param titulo, autor, disponibles,codigoLibro
     * 
     */
    void setTitulo(std:: string titulo);
    void setAutor(std:: string autor);
    void setDisposnibles(std:: string disponibles);
    void setCodigoLibro(int codigoLibro);

};
#endif