#include "../include/Bibliotecarios.h"

Bibliotecario::Bibliotecario(std::string nombre, int documento, int edad, int codigoEmpleado, int salario)

: Persona(nombre, documento, edad){

    this->codigoEmpleado = codigoEmpleado;
    this->salario = salario;
}
    void Bibliotecario::mostrarInformacion(){
     std::cout << "Nombre: " << getNombre() << std::endl;
     std::cout << "Documento: " << getDocumento() << std::endl;
     std::cout << "Edad: " << getEdad() << std::endl;
     std::cout << "Codigo Empleado: " << codigoEmpleado << std::endl;
     std::cout << "Salario: " << salario << std::endl;
     mostrarRol();
    }
    void Bibliotecario::mostrarRol(){
      std::cout << "Rol: Bibliotecario"<< std::endl;
    }
    int Bibliotecario::getCodigoEmpleado(){
      return codigoEmpleado;
    }
    int Bibliotecario::getSalario(){
      return salario;
    }
    void Bibliotecario::setCodigoEmpleado(int codigoEmpleado){
      this->codigoEmpleado = codigoEmpleado;
    }
    void Bibliotecario::setSalario(int salario){
      this->salario = salario;
    }