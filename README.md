Sistema de Gestión de Biblioteca (C++ POO)
Descripción del proyecto

Este proyecto consiste en el desarrollo de un sistema de gestión de biblioteca implementado en C++, utilizando principios de Programación Orientada a Objetos (POO) como herencia, encapsulación y polimorfismo.

El sistema permite administrar usuarios, bibliotecarios y libros, además de gestionar el préstamo y devolución de libros mediante un menú interactivo en consola.

Objetivo

Desarrollar un sistema orientado a objetos para la administración de una biblioteca, aplicando conceptos fundamentales de programación en C++.

Conceptos aplicados
Encapsulación
Herencia
Polimorfismo
Uso de clases y objetos
Manejo de vectores (std::vector)
Separación en .h y .cpp
Validación de entradas
Uso de menú en consola
Estructura del proyecto
Proyecto/
│
├── include/
│   ├── Persona.h
│   ├── Usuario.h
│   ├── Bibliotecarios.h
│   ├── Libro.h
│
├── src/
│   ├── Persona.cpp
│   ├── Usuario.cpp
│   ├── Bibliotecarios.cpp
│   ├── Libro.cpp
│   ├── main.cpp
│
├── README.md
└── .gitignore
Clases del sistema
Persona (Clase base)

Atributos:

nombre
documento
edad

Métodos:

mostrarRol()
mostrarInformacion()
Usuario (Hereda de Persona)

Atributos:

codigoUsuario
cantidadLibrosPrestados
Bibliotecario (Hereda de Persona)

Atributos:

codigoEmpleado
salario
Libro

Atributos:

titulo
autor
codigoLibro
estado (Disponible / Prestado)

Métodos:

prestarLibro()
devolverLibro()
mostrarInformacion()
Funcionalidades del sistema

El sistema permite:

Registrar usuario
Registrar bibliotecario
Registrar libro
Prestar libro
Devolver libro
Mostrar usuarios
Mostrar libros
Salir
Reglas del sistema
Un libro solo puede prestarse si está disponible
Al devolver un libro, cambia su estado a disponible
No se pueden ingresar valores inválidos (edad > 0, códigos numéricos)
Un usuario debe existir para recibir préstamos
Se valida existencia de libros y usuarios antes de operar
Menú del sistema
========= BIBLIOTECA =========
1. Registrar usuario
2. Registrar bibliotecario
3. Registrar libro
4. Prestar libro
5. Devolver libro
6. Mostrar usuarios
7. Mostrar libros
8. Salir
Autores
Giomar Oneith Moreno Quintero
Loren Sofía Patarroyo Preciado
