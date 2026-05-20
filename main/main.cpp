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

    }while();

    return 0;
}