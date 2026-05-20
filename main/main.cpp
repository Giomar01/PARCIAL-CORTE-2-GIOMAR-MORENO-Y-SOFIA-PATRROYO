#include <iostream>
#include <vector>
#include "../include/Usuario.h"
#include "../include/Bibliotecarios.h"
#include "../include/Libro.h"

int main(){
    int opcion;
    std::vector<Usuario> usuarios;
    std::vector<Bibliotecario> bibliotecarios;
    std::vector<Libro> libros;


    do{
        std::cout << std::endl;
        std::cout << "========= BIBLIOTECA =========" << std::endl;
        std::cout << "1. Registrar usuario" << std::endl;
        std::cout << "2. Registrar bibliotecario" << std::endl;
        std::cout << "3. Registrar libro" << std::endl;
        std::cout << "4. Prestar libro" << std::endl;
        std::cout << "5. Devolver libro" << std::endl;
        std::cout << "6. Mostrar usuarios" << std::endl;
        std::cout << "7. Mostrar libros" << std::endl;
        std::cout << "8. Salir" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion){
            case 1:{

                std::string nombre;
                int documento;
                int edad;
                int codigoUsuario;

                std::cout << std::endl;
                std::cout << "Nombre: ";
                getline(std::cin >> std::ws, nombre);

                std::cout << "Documento: ";
                std::cin >> documento;
                if(std::cin.fail()){

                 std::cout << "El documento debe ser numerico"<< std::endl;
                

                 std::cin.clear();
                 std::cin.ignore(1000, '\n');
                 break;
                }

                 std::cout << "Edad: ";
                 std::cin >> edad;
                 

                if(edad <= 0){

                    std::cout << "Edad invalida" << std::endl;
                    break;
                }

                std::cout << "Codigo Usuario: ";
                std::cin >> codigoUsuario;
                 if(std::cin.fail()){

                   std::cout << "El codigo debe ser numerico"<< std::endl;
                    

                   std::cin.clear();
                   std::cin.ignore(1000, '\n');

                  break;
                 }


                Usuario nuevoUsuario(nombre, documento, edad, codigoUsuario, 0);

                usuarios.push_back(nuevoUsuario);

                std::cout << "Usuario registrado correctamente" << std::endl;

                break;
            }
             case 2:{

                std::string nombre;
                int documento;
                int edad;
                int codigoEmpleado;
                int salario;

                std::cout << std::endl;
                std::cout << "Nombre: ";
                getline(std::cin >> std::ws, nombre);

                std::cout << "Documento: ";
                std::cin >> documento;
                if(std::cin.fail()){

                   std::cout << "El documento debe ser numerico"<< std::endl;
                

                   std::cin.clear();
                   std::cin.ignore(1000, '\n');
                 break;
                }
                std::cout << "Edad: ";
                std::cin >> edad;

                if(edad <= 0){

                    std::cout << "Edad invalida" << std::endl;
                    break;
                }

                std::cout << "Codigo Empleado: ";
                std::cin >> codigoEmpleado;
                if(std::cin.fail()){

                   std::cout << "El codigo del empleado debe ser numerico"<< std::endl;
                   std::cin.clear();
                   std::cin.ignore(1000, '\n');

                 break;
                }

                std::cout << "Salario: ";
                std::cin >> salario;
                if(std::cin.fail()){

                    std::cout << "El salario debe ser numerico" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');

                   break;
                }

                Bibliotecario nuevoBibliotecario(nombre, documento, edad, codigoEmpleado, salario);

                bibliotecarios.push_back(nuevoBibliotecario);

                std::cout << "Bibliotecario registrado correctamente" << std::endl;

                break;
            }
            case 3:{

                std::string titulo;
                std::string autor;
                int codigoLibro;

                std::cout << std::endl;
                std::cout << "Titulo: ";
                getline(std::cin >> std::ws, titulo);

                std::cout << "Autor: ";
                getline(std::cin >> std::ws, autor);

                std::cout << "Codigo Libro: ";
                std::cin >> codigoLibro; 
                if(std::cin.fail()){

                    std::cout << "El codigo del libro debe ser numerico"<< std::endl;
                  
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');

                 break;
                }

                Libro nuevoLibro(titulo,autor,"Disponible", codigoLibro);

                libros.push_back(nuevoLibro);

                std::cout << "Libro registrado correctamente" << std::endl;

                break;
            }
            case 4:{

                int codigoLibro;
                int codigoUsuario;
                int i,j;
                std::cout << std::endl;
                std::cout << "Codigo del libro: ";
                std::cin >> codigoLibro;

                std::cout << "Codigo del usuario: ";
                std::cin >> codigoUsuario;

                for( i = 0; i < libros.size(); i++){

                   if(libros[i].getCodigoLibro() == codigoLibro){
                      if(libros[i].getDisponible() == "Disponible"){
                         libros[i].prestarLibro();
                      }
                     else{
                       std::cout << "El libro ya esta prestado\n";
                       break;
                     }

                     break;
                   }
                }
                if (i == libros.size()) {
                    std::cout << "Libro no encontrado"<< std::endl;
                    break;
                }
                for( j = 0; j < usuarios.size(); j++){

                   if(usuarios[j].getCodigoUsuario() == codigoUsuario){

                    usuarios[j].setCantidadLibrosPrestados(usuarios[j].getCantidadLibrosPrestados() + 1 );
                    break;
                   }
                }
                if (j == usuarios.size()) {
                  std::cout << "Usuario no encontrado"<< std::endl;
                  break;
                }
                   std::cout << "Libro prestado correctamente"<< std::endl;
                  break;
            }
            case 5:{
                 int codigoLibro, codigoUsuario;
                 int i, j;

                 std::cout << "Codigo del libro: ";
                 std::cin >> codigoLibro;

                 std::cout << "Codigo del usuario: ";
                 std::cin >> codigoUsuario;

                 for (i = 0; i < libros.size(); i++) {
                   if (libros[i].getCodigoLibro() == codigoLibro) {
                      libros[i].devolverLibro();
                     break;
                   }
                 }

                 if (i == libros.size()) {
                  std::cout << "Libro no encontrado\n";
                  break;
                 }

                 for (j = 0; j < usuarios.size(); j++) {

                  if (usuarios[j].getCodigoUsuario() == codigoUsuario) {

                   if (usuarios[j].getCantidadLibrosPrestados() > 0) {
                    usuarios[j].setCantidadLibrosPrestados(usuarios[j].getCantidadLibrosPrestados() - 1);
                   }

                   break;
                  }
                 }
                 if (j == usuarios.size()) {
                   std::cout << "Usuario no encontrado\n";
                   break;
                 }

                 std::cout << "Libro devuelto correctamente\n";

                break;
            }
            case 6:{

                if(usuarios.size() == 0){

                    std::cout << "No hay usuarios registrados" << std::endl;
                    break;
                }

                for(int i = 0; i < usuarios.size(); i++){

                    usuarios[i].mostrarInformacion();
                }

                break;
            }
            case 7:{

                if(libros.size() == 0){

                    std::cout << "No hay libros registrados" << std::endl;
                    break;
                }

                for(int i = 0; i < libros.size(); i++){

                    libros[i].mostrarInformacion();
                }

                break;
            }
            case 8:{

                std::cout << "Saliendo del sistema..." << std::endl;

                break;
            }

            default:

                std::cout << "Opcion invalida" << std::endl;
        }



    }while(opcion !=8);

    return 0;
}