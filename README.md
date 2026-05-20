# Sistema de Gestión de Biblioteca (C++ POO)

## Descripción del proyecto

Este proyecto consiste en el desarrollo de un sistema de gestión de biblioteca implementado en C++, utilizando principios de Programación Orientada a Objetos (POO) como herencia, encapsulación y polimorfismo.

El sistema permite administrar usuarios, bibliotecarios y libros, además de gestionar el préstamo y devolución de libros mediante un menú interactivo en consola.

---

## Objetivo

Desarrollar un sistema orientado a objetos para la administración de una biblioteca, aplicando conceptos fundamentales de programación en C++.

---

## Conceptos aplicados

- Encapsulación  
- Herencia  
- Polimorfismo  
- Clases y objetos  
- Manejo de `std::vector`  
- Separación en archivos `.h` y `.cpp`  
- Validación de entradas  
- Menú en consola  

---

## Estructura del proyecto

```bash
Proyecto/
├── include/
│   ├── Persona.h
│   ├── Usuario.h
│   ├── Bibliotecario.h
│   └── Libro.h
│
├── src/
│   ├── Persona.cpp
│   ├── Usuario.cpp
│   ├── Bibliotecario.cpp
│   ├── Libro.cpp
│   └── main.cpp
│
├── README.md
└── .gitignore
```
## Clases del sistema

### Persona (Clase base)

**Atributos:**
- nombre  
- documento  
- edad  

**Métodos:**
- mostrarRol()  
- mostrarInformacion()  

---

### Usuario (hereda de Persona)

**Atributos:**
- codigoUsuario  
- cantidadLibrosPrestados  

---

### Bibliotecario (hereda de Persona)

**Atributos:**
- codigoEmpleado  
- salario  

---

### Libro

**Atributos:**
- titulo  
- autor  
- codigoLibro  
- estado (Disponible / Prestado)  

**Métodos:**
- prestarLibro()  
- devolverLibro()  
- mostrarInformacion()  

---

## Funcionalidades del sistema

- Registrar usuario  
- Registrar bibliotecario  
- Registrar libro  
- Prestar libro  
- Devolver libro  
- Mostrar usuarios  
- Mostrar libros  
- Salir  

---

## Reglas del sistema

- Un libro solo puede prestarse si está disponible  
- Al devolver un libro, su estado cambia a "Disponible"  
- No se permiten valores inválidos (edad > 0, códigos numéricos válidos)  
- Un usuario debe existir para poder recibir préstamos  
- Se valida la existencia de usuarios y libros antes de realizar operaciones  

---

## Menú del sistema


========= BIBLIOTECA =========

Registrar usuario
Registrar bibliotecario
Registrar libro
Prestar libro
Devolver libro
Mostrar usuarios
Mostrar libros
Salir

---

## Autores

- Giomar Oneith Moreno Quintero  
- Loren Sofía Patarroyo Preciado  
