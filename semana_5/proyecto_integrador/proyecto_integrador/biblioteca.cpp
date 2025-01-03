#include "biblioteca.h"

// metodos para gestionar libros
void Biblioteca::agregarLibro(Libro libro) {
    if (libro.getCantidad() < 0) {
        cout<<"Error: No se puede agregar un libro con cantidad negativa."<<endl;
        return;
    }
    libros.push_back(libro);
    cout<<endl;
    cout<<"Libro agregado: "<<libro.getTitulo()<<endl;
}

void Biblioteca::mostrarLibrosDisponibles() {
    cout<<"Libros disponibles: "<<endl;
    for (Libro& libro : libros) {
        if (libro.getCantidad() > 0) {
            libro.imprimir();
            cout<<endl;
        }
    }
}

Libro& Biblioteca::buscarLibro(int libroId) {
    for (Libro& libro : libros) {
        if (libro.getId() == libroId) {
            return libro;
        }
    }
    throw invalid_argument("Error: Libro no encontrado");
}

// metodos para gestionar usuarios
void Biblioteca::registrarUsuario(Usuario usuario) {
    usuarios.push_back(usuario);
    cout<<endl;
    cout<<"Usuario registrado: "<<usuario.getNombre()<<endl;
}

Usuario& Biblioteca::buscarUsuario(int usuarioId) {
    for (Usuario& usuario : usuarios) {
        if (usuario.getId() == usuarioId) {
            return usuario;
        }
    }
    throw invalid_argument("Error: Usuario no encontrado");
}

// metodos para gestionar prestamos
void Biblioteca::realizarPrestamo(int libroId, int usuarioId, Date fechaPrestamo, Date fechaDevolucion) {
    try {
        Libro& libro = buscarLibro(libroId);
        Usuario& usuario = buscarUsuario(usuarioId);

        if (libro.getCantidad() <= 0) {
            cout<<"Error: No hay copias disponibles para el libro"<<endl;
            return;
        }

        libro.setCantidad(libro.getCantidad() - 1);
        Prestamo prestamo(libroId, usuarioId, fechaPrestamo, fechaDevolucion);
        prestamos.push_back(prestamo);
        usuario.agregarPrestamo(&prestamos.back());
        cout<<"Prestamo realizado exitosamente"<<endl;

    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}


void Biblioteca::devolverLibro(int libroId, int usuarioId) {
    try {
        Libro& libro = buscarLibro(libroId);

        for (auto i = prestamos.begin(); i != prestamos.end(); ++i) {
            if (i->getLibroId() == libroId && i->getUsuarioId() == usuarioId) {
                libro.setCantidad(libro.getCantidad() + 1);
                i->setEstado("devuelto");
                cout<<"Devolucion registrada exitosamente"<<endl;
                return;
            }
        }
        cout << "Error: No se encontro un prestamo para el libro con ID: " << libroId << " y el usuario con ID: " << usuarioId << endl;

    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}

// metodos para imprimir datos
void Biblioteca::imprimirBiblioteca() {
    cout<<"Estado de la biblioteca: "<<endl;
    cout<<"Total de libros: "<<libros.size()<<endl;
    cout<<"Total de usuarios: "<<usuarios.size()<<endl;
    int prestamosActivos = 0;
    for (Prestamo& prestamo : prestamos) {
        if (prestamo.getEstado() == "prestado") {
            ++prestamosActivos;
        }
    }
    cout<<"Prestamos activos: "<<prestamosActivos<<endl;
}

void Biblioteca::imprimirUsuario(int usuarioId) {
    try {
        Usuario& usuario = buscarUsuario(usuarioId);
        usuario.imprimir();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}

void Biblioteca::imprimirLibro(int libroId) {
    try {
        Libro& libro = buscarLibro(libroId);
        libro.imprimir();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}

void Biblioteca::imprimirPrestamo(int libroId, int usuarioId) {
    for (Prestamo& prestamo : prestamos) {
        if (prestamo.getLibroId() == libroId && prestamo.getUsuarioId() == usuarioId) {
            prestamo.imprimir();
            return;
        }
    }
    cout<<"Error: No se encontro un prestamo para el libro con ID: "<<libroId<<" y el usuario con ID: "<<usuarioId<<endl;
}

// destructor
Biblioteca::~Biblioteca() {}
