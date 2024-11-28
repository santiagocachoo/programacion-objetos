//  sistema de gestion de una biblioteca con clases
//  ???
//  27/11/24

#include <iostream>
#include "biblioteca.h"

int main() {
    Biblioteca miBiblioteca;
    int opcion;
    
    do {
            // mostrar menu
            cout<<"Sistema de Gestión de Biblioteca"<<endl;
            cout<<"1. Agregar un libro"<<endl;
            cout<<"2. Registrar un usuario"<<endl;
            cout<<"3. Realizar un préstamo"<<endl;
            cout<<"4. Devolver un libro"<<endl;
            cout<<"5. Mostrar libros disponibles"<<endl;
            cout<<"6. Salir"<<endl;
            cout<<"Seleccione una opción: ";
            cin>>opcion;
        while (cin.fail() || opcion < 1 || opcion > 6) {
            cout<<"Error: Ingrese un numero valido entre 1 y 6: ";
            cin.clear();
            cin.ignore();
            cin>>opcion;
        }

            // Procesar la opción seleccionada
            switch (opcion) {
                case 1: {
                    // agregar un libro
                    
                    // validar id del libro
                    int id, cantidad;
                    string titulo, autor;
                    cout<<"Ingrese ID del libro: ";
                    cin>>id;
                    while (cin.fail()) {
                        cout<<"Error: Ingrese un número válido para el ID del libro: ";
                        cin.clear();
                        cin.ignore();
                        cin>>id;
                    }
                    
                    cout<<"Ingrese título: ";
                    cin.ignore();
                    getline(cin, titulo);
                    
                    cout<<"Ingrese autor: ";
                    getline(cin, autor);
                    
                    // validar cantidad
                    cout<<"Ingrese cantidad: ";
                    cin>>cantidad;
                    while (cin.fail() || cantidad < 0) {
                        cout<<"Error: Ingrese un número válido mayor o igual a cero para la cantidad: ";
                        cin.clear();
                        cin.ignore();
                        cin>>cantidad;
                    }
                    miBiblioteca.agregarLibro(Libro(id, titulo, autor, cantidad));
                    cout<<endl;
                    break;
                }
                    
                    
                case 2: {
                    // registrar un usuario
                    int id;
                    string nombre;
                    
                    // validar id de usuario
                    cout<<"Ingrese ID del usuario: ";
                    cin>>id;
                    while (cin.fail()) {
                        cout<<"Error: Ingrese un número válido para el ID del usuario: ";
                        cin.clear();
                        cin.ignore();
                        cin>>id;
                    }
                    
                    cin.ignore();
                    
                    cout<<"Ingrese nombre del usuario: ";
                    getline(cin, nombre);
                    miBiblioteca.registrarUsuario(Usuario(id, nombre));
                    cout<<endl;
                    break;
                }
                    
                    
                case 3: {
                    // realizar un préstamo
                    int libroId, usuarioId;
                    string fechaPrestamo, fechaDevolucion;
                    
                    // validar id de libro
                    cout<<"Ingrese ID del libro: ";
                    cin>>libroId;
                    while (cin.fail()) {
                        cout<<"Error: Ingresar numero valido para el ID del libro: ";
                        cin.clear();
                        cin.ignore();
                        cin>>libroId;
                    }
                    
                    // validar id de usuario
                    cout<<"Ingrese ID del usuario: ";
                    cin>>usuarioId;
                    while (cin.fail()) {
                        cout<<"Error: Ingresar numero valido para el ID del usuario: ";
                        cin.clear();
                        cin.ignore();
                        cin>>usuarioId;
                    }
                    
                    cin.ignore();
                    cout<<"Ingrese fecha de préstamo (DD/MM/AAAA): ";
                    getline(cin, fechaPrestamo);
                    cout<<"Ingrese fecha de devolución (DD/MM/AAAA): ";
                    getline(cin, fechaDevolucion);
                    miBiblioteca.realizarPrestamo(libroId, usuarioId, fechaPrestamo, fechaDevolucion);
                    cout<<endl;
                    break;
                }
                    
                    
                case 4: {
                    // devolver un libro
                    int libroId, usuarioId;
                    
                    // validar id de libro
                    cout<<"Ingrese ID del libro: ";
                    cin>>libroId;
                    while (cin.fail()) {
                        cout<<"Error: Ingrese un número válido para el ID del libro: ";
                        cin.clear();
                        cin.ignore();
                        cin>>libroId;
                    }
                    
                    // validar id de usuario
                    cout<<"Ingrese ID del usuario: ";
                    cin>>usuarioId;
                    while (cin.fail()) {
                        cout<<"Error: Ingrese un número válido para el ID del usuario: ";
                        cin.clear();
                        cin.ignore();
                        cin>>usuarioId;
                    }
                    
                    miBiblioteca.devolverLibro(libroId, usuarioId);
                    break;
                }
                    
                    
                case 5: {
                    // mostrar todos los libros
                    cout<<"Mostrar todos los libros disponibles"<<endl;
                    miBiblioteca.mostrarLibrosDisponibles();
                    break;
                }
                case 6:
                    cout<<"Saliendo del sistema. ¡Adios!"<<endl;
                    break;
                default:
                    cout<<"Opción inválida. Intente nuevamente."<<endl;
                    break;
            }
        } while (opcion != 6);

        return 0;
    }

