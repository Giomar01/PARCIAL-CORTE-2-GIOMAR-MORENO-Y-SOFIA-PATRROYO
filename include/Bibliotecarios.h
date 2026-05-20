#ifndef BIBLIOTECARIOS_H
#define BIBLIOTECARIOS_H

#include "Persona.h"

/**
 * @class Bibliotecarios
 * @brief Clase que deriva de Persona que representa un bibliotecario
 * 
 */
class Bibliotecario : public Persona{
private:
 int codigoEmpleado;
 int salario;
 public:
 /**
  * @brief Constructor de clase persona 
  * @param nombre del biblotecario
  * @param documento del bibliotecario
  * @param edad del bibliotecario 
  * @param codigoEmpleado codigo del empleado
  * @param salario salrio del empleado 
  * 
  */
 Bibliotecario(std::string nombre,int documento,int edad,int codigoEmpleado,int salario );


 /**
  * @brief muestra la informacion y el rol de la persona 
  * 
  */ 
 void mostrarInformacion()override;
 

 //Getters 

 /**
  * @brief Obtiene el codigo del empleado
  * @return int
  * 
  */
  int getCodigoEmpleado();
  int getSalario();

  //Setters 

  /**
   * @brief Modifica el codigo del empleado y el salario 
   * @param CodigoEmpleado,salario
   */
  void setCodigoEmpleado (int codigoEmpleado);
  void setSalario(int salario);
};
#endif