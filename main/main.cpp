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

                std::cout << "Edad: ";
                std::cin >> edad;

                if(edad <= 0){

                    std::cout << "Edad invalida" << std::endl;
                    break;
                }

                std::cout << "Codigo Usuario: ";
                std::cin >> codigoUsuario;

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

                std::cout << "Edad: ";
                std::cin >> edad;

                if(edad <= 0){

                    std::cout << "Edad invalida" << std::endl;
                    break;
                }

                std::cout << "Codigo Empleado: ";
                std::cin >> codigoEmpleado;

                std::cout << "Salario: ";
                std::cin >> salario;

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

                Libro nuevoLibro(titulo,autor,"Disponible", codigoLibro);

                libros.push_back(nuevoLibro);

                std::cout << "Libro registrado correctamente" << std::endl;

                break;
            }
            case 4:{

                int codigoLibro;

                std::cout << std::endl;
                std::cout << "Codigo del libro: ";
                std::cin >> codigoLibro;

                for(int i = 0; i < libros.size(); i++){

                   if(libros[i].getCodigoLibro() == codigoLibro){

                    libros[i].prestarLibro();
                   }
                }

                 break;
            }
            case 5:{

               int codigoLibro;

               std::cout << std::endl;
               std::cout << "Codigo del libro: ";
               std::cin >> codigoLibro;

               for(int i = 0; i < libros.size(); i++){

                 if(libros[i].getCodigoLibro() == codigoLibro){

                    libros[i].devolverLibro();
                 }
               }

             break;
            }
            case 6:{

                if(usuarios.size() == 0){

                    std::cout << "No hay usuarios registrados" << std::endl;
                }

                for(int i = 0; i < usuarios.size(); i++){

                    usuarios[i].mostrarInformacion();
                }

                break;
            }
            case 7:{

                if(libros.size() == 0){

                    std::cout << "No hay libros registrados" << std::endl;
                }

                for(int i = 0; i < libros.size(); i++){

                    libros[i].mostrarInformacion();
                }

                break;
            }



    }while();

    return 0;
}