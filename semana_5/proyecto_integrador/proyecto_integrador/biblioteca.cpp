#include "biblioteca.h"

// metodos para gestionar libros
void Biblioteca::agregarLibro(Libro libro) {
    libros.push_back(libro);
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

Libro* Biblioteca::buscarLibro(int libroId) {
    for (Libro& libro : libros) {
        if (libro.getId() == libroId) {
            return &libro;
        }
    }
    return nullptr;
}

// metodos para gestionar usuarios
void Biblioteca::registrarUsuario(Usuario usuario) {
    usuarios.push_back(usuario);
    cout<<"Usuario registrado "<<usuario.getNombre()<<endl;
}

Usuario* Biblioteca::buscarUsuario(int usuarioId) {
    for (Usuario& usuario : usuarios) {
        if (usuario.getId() == usuarioId) {
            return &usuario;
        }
    }
    return nullptr;
}

// metodos para gestionar prestamos
void Biblioteca::realizarPrestamo(int libroId, int usuarioId, string fechaPrestamo, string fechaDevolucion) {
    Libro* libro = buscarLibro(libroId);
    Usuario* usuario = buscarUsuario(usuarioId);
    
    if (libro == nullptr) {
        cout<<"Error: Libro no encontrado"<<endl;
        return;
    }
    
    if (usuario == nullptr) {
        cout<<"Error: Usuario no encontrado"<<endl;
        return;
    }
    
    if (libro->getCantidad() <= 0) {
        cout<<"Error: No hay copias disponibles para el libro"<<endl;
        return;
    }
    
    libro->setEstado("Prestado");
    usuario->agregarPrestamo(libroId);
    prestamos.push_back(Prestamo(libroId, usuarioId, fechaPrestamo, fechaDevolucion));
    cout<<"Prestamo realizado exitosamente"<<endl;
}

void Biblioteca::devolverLibro(int libroId) {
    Libro* libro = buscarLibro(libroId);
    
    if (libro == nullptr) {
        cout<<"Error: Libro no encontrado"<<endl;
        return;
    }
    
    if (libro->getEstado() == "Disponible") {
        cout<<"Error: El libro ya esta disponible"<<endl;
        return;
    }
    
    libro->setEstado("Disponible");
    
    // buscar prestamo y eliminarlo del historial del usuario
    for (auto i = prestamos.begin(); i != prestamos.end(); ++i) {
        if (i->getLibroId() == libroId) {
            Usuario* usuario = buscarUsuario(i->getUsuarioId());
            if (usuario != nullptr) {
                usuario->eliminarPrestamo(libroId);
            }
            prestamos.erase(i);
            cout<<"Devolución exitosa. El libro ya esta disponible"<<endl;
            return;
        }
    }
    cout<<"Error: Prestamo no encontrado"<<endl;
}

// imprimir
void Biblioteca::imprimir() {
    cout<<"Estado de la biblioteca: "<<endl;
    cout<<"Total de libros: "<<libros.size()<<endl;
    cout<<"Total de usuarios: "<<usuarios.size()<<endl;
    cout<<"Prestamos activos: "<<prestamos.size()<<endl;
}

// destructor
Biblioteca::~Biblioteca() {}
