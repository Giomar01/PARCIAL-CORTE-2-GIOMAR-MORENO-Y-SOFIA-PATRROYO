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
     * @param titulo del libro 
     * @param autor del libro
     * @param disponibles disponibilidad el libro
     * @param codigoLibro del libro
     * 
     */
    Libro(std:: string titulo, std:: string autor, std:: string disponible, int codigoLibro);
//Metodos 

/**
 * @brief Muestra informacion del libro.
 *
 */
void mostrarInformacion();
     /**
     * @brief Presta el libro si esta disponible.
     */
void prestarLibro();
     /**
     * @brief Devuelve el libro.
     */
void devolverLibro();
  

//Getters

    /**
     * @brief obtiene el  codigo del libro 
     * @return  libro 
     * 
     */

    int getCodigoLibro();
    std::string getDisponible();

    //Setters 

    /**
     * @brief Modifica el titulo del libro
     * @param titulo nuevo titulo.
     */
    void setTitulo(std:: string titulo);
     /**
     * @brief Modifica el autor del libro
     * @param autor nuevo autor.
     */
    void setAutor(std:: string autor);
    /**
     * @brief Modifica la disponibilidad
     * @param disponibles nuevoa disponibilidad.
     */
    void setDisponibles(std:: string disponibles);
     /**
     * @brief modifica el codigo del libro.
     * @param codigoLibro nuevo codigo del libro.
     */
    void setCodigoLibro(int codigoLibro);

};
#endif